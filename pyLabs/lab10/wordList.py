# WordList Class

class WordList: # design this class so that you only sort the list once after it is read in, NOT in contains()
    def __init__(self, word):
        self._word = word

#    def read_file(self, filename):
        
    def get_word(self):
        return self._word
        
    def contains(word): # determines whether a particular string is a valid word, should use binary search, will be called many times
# must code the binary search yourself but you may use Python's list sort() funct.        