import sys

def main():
    data = input('Enter a string: ')
    attrition(data)
    if(ispalindrom(data)) == False:
        print('\nThe string is NOT a Palindrome')
    else:
        print('\nThe string IS a Palindrome')
        
def attrition(data):
    if(len(data)) == 0:
        return
    else:
       attrition(data[1:])

def reverse(data):
    if len(data) == 0:
        return data
    else:
        return reverse(data[1:]) + data[0]

def count(data):
    if(len(data)) == 0:
        return 0
    else:
       return 1 + count(data[1:])

def ispalindrom(data):
    if(data.isalpha()):
        data = data.lower()
    else:
        data = data.strip(',.\'\"\(\)?!&').lower()

    length = count(data)
    datarev = reverse(data)
    
    if(length) <= 1:
        return True
    elif( data[0] != datarev[0]):
        return False
    else:
        ispalindrom(data[1:-1])
        
    
if __name__ =="__main__":
    sys.exit(main())
