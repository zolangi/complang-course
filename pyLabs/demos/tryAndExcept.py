#input validation is typically done with exception handling:
#using Futue Value Calculator file as demo

import sys
def main():
    principal = getFloat('principal amount', 0, 1000000000)
    rate = getFloat('annual interest rate', 0, 100)/100
    time = getFloat('number of years', 0, 100)
    print('{:.2f}'.format(fv(principal, rate, time)))

def fv(principal, rate, time):
    curr = principal * ((1 + rate) ** time)
    return curr

def getFloat(desc, min, max):
    ret = None
    while ret == None:
        try:
            curr = float(input('Enter the ' + desc +': '))
            if (curr >= min) & (curr <= max):
                ret = curr
            else:
                raise ValueError()    
        except ValueError:
            print('Invalid input.  Please try again.')
    return ret
  
if __name__ == "__main__":
    sys.exit(main())
