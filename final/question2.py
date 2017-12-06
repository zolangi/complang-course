#a) Write the function bunny_ears(n), which recursively find the total number of ears for a nonnegative number of bunnies, without using multiplication.  Hint: 0 bunnies have a total of 0 ears, and the total for any greater number of bunnies is 2 + the result of a recursive call

#b) Write a list comprehension which uses bunny_ears(n) to create a list of tuples.  Each tuple consists of the number of bunnies and the total number of ears, but all the tuples represent numbers of bunnies that are evenly divisible by 3.  The first few tuples will be

#(0, 0), (3, 6), (6, 12)

import sys

def main():
    n = 30
    print('The total number of bunny ears for ', n ,' bunnies is: ', bunny_ears(n))
    
    print(nt(n))
    
def bunny_ears(n):
    if n == 0:
        return 0
    else:
        return 2 + bunny_ears(n-1)

def nt(n):
    et = [(i, bunny_ears(i)) for i in range(0, n+1) if i % 3 == 0]
    return et

if __name__ == "__main__":
    sys.exit(main())
