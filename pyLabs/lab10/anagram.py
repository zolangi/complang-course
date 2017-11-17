# Anagramizer Class

class Anagramizer:
    def __init__(self, word):
        self._word = word
        
    def get_word(self):
        return self._word
    
    def __str__(self):
        return 'Word: ' + str(self._word)
