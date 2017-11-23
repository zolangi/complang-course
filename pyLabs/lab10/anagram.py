
# Anagramizer Class
from wordList import WordList

class Anagramizer:
    def __init__(self):
        self._letters = set()
        
    def anagram(self, word):
        if len(word) == 1:
            return self._letters
        else:
            for letter in word:
                c = word.index(letter)
                self.anagram(word[:c] + word[c+1:])
                self._letters.add(letter + (word[:c] +word[c+1:]) )
            return self._letters

    def print_anagrams(self):
        w = WordList()
        for word in self._letters:
            for validWord in w.contains(word):
                print(validWord)
            # else:
            #     print('The word entered is invalid')
