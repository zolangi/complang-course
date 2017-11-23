# Anagramizer Class
from wordList import WordList

class Anagramizer:
    def __init__(self):
        self._words = set()
        
    def anagram(self, word):
        if len(word) == 1:
            self._words.add(word)
            return self._words
        else:
            ret = set()
            for letter in word:
                self.anagram(word[1:])
                ret.add(word[0] + word)
            return ret

    def print_anagrams(self):
        w = WordList()
        for word in self._words:
            if w.contains(word) == True:
                print(word)
            else:
                print('The word entered is invalid')
