# Driver for the Anagramizer

import sys
from anagram import Anagramizer

def main():
    a = Anagramizer()
    a.anagram('more money')
    a.print_anagrams()
    
if __name__ == "__main__":
    sys.exit(main())
