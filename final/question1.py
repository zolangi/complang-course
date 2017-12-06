# a) Write a function that takes two numbers as arguments and returns the value of the first number raised to the power of the second number.  Note that Python uses ** to signify exponents: for example 2 ** 4 means 2 to the 4th power.

# b) Write a list comprehension that takes a list of tuples, each of which consists of two numbers, and uses your function to create a new list of tuples.  The tuples in the new list should each contain three values; the base, exponent, and result of each calculation.  For example, if one tuple in the old list was (2,3), there will be a tuple like this in the new list: (2,3,8). 
                        
# import sys

# def main():
#     tt = ((2,1), (2,2), (2,3), (2,4), (2,5))
#     print(nt(tt))

# def pwr(x, y):
#     return x**y

# def nt(tt):
#     nt = [(t[0], t[1], pwr(t[0], t[1])) for t in tt ]
#     return nt

# if __name__ == "__main__":
#     sys.exit(main())

import sys

def main():
    tt = ((2,1), (2,2), (2,3), (2,4), (2,5))
    print(nt(tt))

def pwr(x, y):
    return x**y

def nt(tt):
    et = [(t[0], t[1], pwr(t[0], t[1])) for t in tt ]
 return et



if __name__ == "__main__":

    sys.exit(main())
