import sys

height = -1
while(height > 23 or height < 0):
    height = int(input("Give me height: "))

i = height
while(i >= 1):

    for spaces in range(0, i - 1):
        print(" ", end='')

    for hashes in range(i - 1, height):
        print("B", end='')
    print("\n", end='')
    i-=1
