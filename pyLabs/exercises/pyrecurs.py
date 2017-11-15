import sys

def main():
    data = input('Enter a string: ')
    attrition(data)
    letter = data[:-1]
    print(letter)
    
 #   print(reverse(data))

def attrition(data):
    print(data)
    if(len(data)) == 0:
        return
    else:
       attrition(data[1:])

#def reverse(data):
#    x = ""
#    if len(data) == 0:
#        return x
#    else:
#        print("reverse", str(reverse(data[:-1])))
#        return x + str(reverse(data[:-1]))
    
def count(data):
    if(len(data)) == 0:
        return 0
    else:
       return 1+count(data[1:])

def ispalindrom(data):
    if(data.isalpha()):
        data.lower()
    else:
        data.strip(',.\'').lower()
    length = count(data)
    if(length) <= 1:
        return true
    
if __name__ =="__main__":
    sys.exit(main())
