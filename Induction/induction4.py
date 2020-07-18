import random
def main():
    N = 2
    ans = 0
    for i in range(1,(N+1)+1):
        ans += (2*i)-1
    print ans

    equation = (N+1)*(N+1)
    print("This is ", equation)


if __name__ == "__main__":
    main() 