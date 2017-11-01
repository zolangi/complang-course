import sys

def main():
    principal = float(input('Enter the principal amount: '))
    rate = float(input('Enter the interest rate in percent per year: '))/100
    time = float(input('Enter the number of years you will leave the money on deposit: '))

    print(fv(principal, rate, time))

def fv(principal, rate, time):
    curr = principal * ((1 + rate) ** time)
    return curr    

if __name__ == "__main__":
    sys.exit(main())
