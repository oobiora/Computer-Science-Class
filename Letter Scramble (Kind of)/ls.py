def main():
    s = raw_input("enter a message")
    print(move13(s))

def move13(x):
    lut = []
    temp = 0
    val = ord('A')
    while temp <= 25:
        lut.append(val)
        val += 1
        temp += 1
    x = list(x)
    temp = 0
    for i in x:
        x[temp] = ord(i)
        temp += 1
    print x
    


    

if __name__ == "__main__":
    main()
