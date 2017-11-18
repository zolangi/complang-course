import urllib3, certifi, re, sys

# need sudo dnf install python3-certifi.noarch, also urllib3

class Crawler:

	def __init__(self):
		self._positive_limit = 10000
		self._negative_limit = 1000
		self._frontier_from_positives = set()
		self._frontier_from_negatives = set()
		self._visited = set()
		self._num_found = 0
		self._pool = urllib3.PoolManager(cert_reqs='CERT_REQUIRED', ca_certs=certifi.where())
		self._get_start_and_key()

	def _get_text(self, pool, curr_url):
		text = None
		try:
			r = self._pool.request('GET', curr_url)
			text = r.data.decode('utf-8')		
		except:
			pass	
		return text	

	def _get_start_and_key(self):
		print ('Enter the starting URL')
		self._start_url = input()
		self._frontier_from_negatives.add(self._start_url)
		print ('Enter the text you are looking for')
		self._key = input()

	def crawl(self):		
		while (len(self._frontier_from_positives) + len(self._frontier_from_negatives)) > 0:			
			if len(self._visited) % 500 == 0:
				self._update()				
			next_url = self._get_next_url()
			text = self._get_text(self._pool, next_url)
			self._visited.add(next_url)
			if text != None:
				self._process_text(text, next_url)
	
	def _process_text(self, text, next_url):
		all = re.findall('''href=["'](.[^"']+)["']''', text, re.I)
		if re.search(self._key, text, re.I):
			print(self._key + ' found at ' + next_url)
			self._num_found += 1
			if (len(self._frontier_from_positives) + len(all)) <= self._positive_limit:
				for i in all:
					if i not in self._visited:
						self._frontier_from_positives.add(i)		
		elif (len(self._frontier_from_negatives) + len(all)) <= self._negative_limit:
			for i in all:
				if i not in self._visited:
					self._frontier_from_negatives.add(i)
	
	def _update(self):
		print('\nvisited: ' + str(len(self._visited)) + '; found: ' + str(self._num_found) + '; frontier from positives: ' + \
				str(len(self._frontier_from_positives)) + '; frontier from negatives: ' + str(len(self._frontier_from_negatives)) +'\n')

	def _get_next_url(self):
		next_url = None
		while(True):		#Python doesn't have do...while!
			if self._frontier_from_positives:
				next_url = self._frontier_from_positives.pop()
			else:
				next_url = self._frontier_from_negatives.pop()
			if next_url not in self._visited:
				break
		return next_url
	
def main():
	c = Crawler()
	c.crawl()		
		    
if __name__ == "__main__":
	sys.exit(main())

# also have to deal with relative urls


#https://null-byte.wonderhowto.com/news/basic-website-crawler-python-12-lines-code-0132785/
#https://urllib3.readthedocs.io/en/latest/user-guide.html
