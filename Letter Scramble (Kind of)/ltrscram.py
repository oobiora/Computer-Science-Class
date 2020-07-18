def main():
    s = raw_input("enter a message")
    print(move13(s))

def move13(x):
    
    lookup = []
    lookup.append('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
    lookup[0] = lookup[0].list()
    lookup.append('abcdefghijklmnopqrstuvwxyz')
    lookup[1] = lookup[1].list()
    x = list(x)
    newuc = x
    temp = 0
    temp2 = 0
    for i in x:
        for h in lookup:
            
            for y in lookup[temp]:
                if i == y:
                    x[temp] =
            temp += 1
        newuc[temp] = i
        temp += 1
    print newuc
    print answer

    return 


    

if __name__ == "__main__":
    main()
