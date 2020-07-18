import sys
import math
import random

def main():
    N = 19637
    print (fun(N), " equivilent to the closed form ", (N * (N+1) * (2*N+1))/6 - (2*N*(N+1)) + 4*N)
    
def fun(x):
    sum = 0
    for i in range(1,x+1,1):
        sum += (i - 2) ** 2
    return sum
    
# Standard boilerplate to call the main() function to begin the program.
if __name__ == '__main__':
    main()