#EX 11: List Comprehensions
import sys

def main():
#    numbers = []
#    cubed(numbers)
    tt = ( ( 1, 2, 3 ), ( 4, 4, 5.5 ), ( 5.5, 2, 1 ) )
    tup(tt)
    num_of_years = 100
    num_year(num_of_years)

#Question Number 1
def cubed(numbers):
    numbers = [1, 2, 3, 5, 6, 7]
    cube = [item ** 3 for item in numbers]
    print( cube)

#Question Number 2
def tup(tt):
    nt = [fv(t[0], t[1], t[2]) for t in tt ]
    print(nt)
    
def fv(principal, rate, time):
    curr = principal * ((1 + rate) ** time)
    return curr

#Question Number 3
def num_year(number_of_years):
    lc = [(1, 0.5, year) for year in range(1,number_of_years+1)]
    nc = tup(lc)
 
    
if __name__ == "__main__":
    sys.exit(main())
