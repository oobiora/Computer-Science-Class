import sys
import math
import random

def main():
    N = 105
    print (fun(N), " equivilent to the closed form ", ((7.3**(N+1)) - 1)/(7.3-1))
    
def fun(x):
    sum = 0
    for i in range(0,x+1,1):
        sum += 7.3 ** i
    return sum
    
# Standard boilerplate to call the main() function to begin the program.
if __name__ == '__main__':
    main()