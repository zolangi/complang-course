# Driver for the Anagramizer

import sys
from anagram import Anagramizer

def main():
    a = Anagramizer()
    a.anagram('the')
    a.print_anagrams()

    print('\n')

    a1 = Anagramizer()
    a1.anagram('eat')
    a1.print_anagrams()

    print('\n')

    a2 = Anagramizer()
    a2.anagram('fircones')
    a2.print_anagrams()
    
if __name__ == "__main__":
    sys.exit(main())
