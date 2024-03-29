import sys

def main():
    print('Welcome! This script is for conversions from Celsius to Fahrenheit. Prints a table showing conversions between a minimum and maximum. \n');
    minimum = selectNum(-300, 5000, 'minimum value');
    maximum = selectNum(-300, 5000, 'maximum value');
    for c in range(minimum, maximum+1):
       f = conversion(c)
       print('%d Celsius = %.2f Fahrenheit \n'% (c, f))
    
def selectNum(min, max, descript):
    ret = None
    while ret==None:
        try:
            print('You can select values between %d and %d \n'% (min, max))
            curr = int(input('Select a ' + descript + ' :\n'))
            if (curr >= min) & (curr <= max) & (type(curr) == int):
                ret = curr
            else:
                raise ValueError()    
        except ValueError:
            print('Invalid input.  Please try again.')
    return ret

def conversion(c):
    f = c*9.0/5.0 + 32
    return f
    
if __name__ == "__main__":
    sys.exit(main())
