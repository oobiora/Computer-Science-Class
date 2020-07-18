import sys

pheight = -1


while pheight > 23 or pheight < 0:
    pheight = int(input("Enter a number in the range 0 - 23: "))
    # print("pheight")

# print("\n")
i = pheight
while i >= 1:
    for spaces in range(0, i):
        print(" ", sep='', end='')
    for lines in range(i - 2, pheight):
        print("#", sep='', end='')
    print("\n", end='')
    i-=1
