
# WordList Class
import math
class WordList:
    
    def __init__(self):
        self._wordList = []

    def read_file(self, filename):
        dictionary = []
        my_file = open(filename, 'r')
        for line in my_file:
            line = line.strip('\n')
            dictionary.append( line)
        return dictionary
        
    def get_wordList(self, word):
        wordList = word.split()
        return wordList

    def sortlist(self, word):
        wordList = self.get_wordList(word)
        for words in wordList:
            words = sorted(words.lower())
            return wordList
        
    def contains(self, word):
        validWords = []
        wordList= self.sortlist(word)
        dictionary = self.read_file('wordsEn.txt')

        for word in wordList:
            if(self.binary_search(dictionary, word)) == True:
                validWords.append(word.strip(' '))
    
        temp_list = []
        for word in validWords:
            if word not in temp_list:
                temp_list.append(word)

        temp = set(temp_list)
        return temp
            
            
    def binary_search(self, dictionary, searchWord):
        start = 0
        end = len(dictionary)-1
        while start <= end:
            mid = math.floor((start+end)/2)
            middle = dictionary[mid]
            if middle > searchWord:
                end = mid - 1
            elif middle == searchWord:
                return True
            elif middle < searchWord:
                start = mid + 1
            

                
            
        # determines whether a particular string is a valid word, should use binary search, will be called many times
# must code the binary search yourself but you may use Python's list sort() funct.        
