#a) Write the function elim_repeats(s), which recursively replaces every sequence of identical characters in a string with a single character.  For example, elim_repeats(abbcccddddee) returns abcde.  Hint: if the first and second characters are identical, return the result of making the recursive call on the string without its first character.  Make sure your method works for strings with 0 or 1 characters.

#b) Write a list comprehension which uses elim_repeats(s) to create a list of tuples.  Each tuple consists of an input string and the result of running elim_repeats(s) on it.  For example, for the input list

#['aabccdee', 'aaabbbbc', xyyyyyyz'] returns [('aabccdee', 'abcde'), ('aaabbbbc', 'abc'), ('xyyyyyyz','xyz')]


import sys

def main():
    s = ['abbcccddddee', 'aabccdee', 'aaabbbbc', 'xyyyyyyz']
    list_comp(s)

def list_comp(s):
    print('Using elim_repeat() to create a list of tuples:')
    ltt = []
    for ss in s:
        result = []
        ltt.append((ss, ''.join(elim_repeat(ss, result))))
    print(ltt)
       
def elim_repeat(s,r):
    if len(s) == 0:
        r = ''.join(r)
        return r
    else:
        if s[0] not in r:
            r.append(s[0])        
        elim_repeat(s[1:], r)
        return r
    
if __name__=="__main__":
    sys.exit(main())
