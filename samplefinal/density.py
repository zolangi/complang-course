import sys

def main():
    prisms = [(3, 1, 5, 7), (3, 3, 4, 9), (2, 4, 7, 8)]
    print('The following is the tuples for prisms:')
    print_prisms(prisms)
    print_densities(prisms)
    
def density_formula(mass, length, width, height):
    density = mass / (length * width * height)
    return density

def calc_density(prisms):
    densities = []
    for prism in prisms:
       density =  density_formula(prism[0],prism[1], prism[2], prism[3])
       print(prism, ' Density:', density)
       densities.append(density)
    return densities

def print_densities(prisms):
    densities = calc_density(prisms)
    for density in densities:
        print(density)

def print_prisms(prisms):
    for prism in prisms:
        print(prism)

if __name__ == "__main__":
    sys.exit(main())


#a) Write a function that calculates the density of a rectangular prism using this formula: density = mass / (length * width * height).  (It doesn't matter what the units are.)

#b) Write a list comprehension that takes a list of tuples, each of which consists of the mass, length, width, and height of a rectangular prism, and uses your function to create a new list consisting of the densities you calculated.
