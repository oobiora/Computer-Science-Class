import random
def main():
    N = 2
    ans = 0
    for i in range(1,(N+1)+1):
        ans += i
    print ans

    equation = ((N+1)*((N+1)+1))/2
    print("This is ", equation)
    
    
if __name__ == "__main__":
    main()