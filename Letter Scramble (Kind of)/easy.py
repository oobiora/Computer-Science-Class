def main():
    s = raw_input("enter a message ")
    N = raw_input("What is the number you want to rotate ")
    N = int(N)
    print rotationrotate(N)
    print(move13(s,N))


def rotationrotate(b):
    b = int(b)
    lutrev = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lutrevlow = 'abcdefghijklmnopqrstuvwxyz'
    lutrevlow = list(lutrevlow)
    lutrev = list(lutrev)

    if b > 0:
        loop_thru = 1
        while(loop_thru <= b):
            temp = lutrev[0]
            temp2 = lutrev[25]
            acc = 1
            while acc<=24:
                lutrev[acc-1] = lutrev[acc]
                acc += 1
            lutrev[24] = temp2
            lutrev[25] = temp
            loop_thru += 1

        loop_thru = 1
        while(loop_thru <= b):
            temp = lutrevlow[0]
            temp2 = lutrevlow[25]
            acc = 1
            while acc<=24:
                lutrevlow[acc-1] = lutrevlow[acc]
                acc += 1
            lutrevlow[24] = temp2
            lutrevlow[25] = temp
            loop_thru += 1
    elif b < 0:
        loop_thru = 1
        while(loop_thru >= b):
            temp = lutrev[0]
            temp2 = lutrev[25]
            acc = 24
            while acc>=1:
                lutrev[acc+1] = lutrev[acc]
                acc -= 1
            lutrev[0] = temp2
            lutrev[1] = temp
            loop_thru -= 1

        loop_thru = 1
        while(loop_thru >= b):
            temp = lutrevlow[0]
            temp2 = lutrevlow[25]
            acc = 24
            while acc>=1:
                lutrevlow[acc+1] = lutrevlow[acc]
                acc -= 1
            lutrevlow[0] = temp2
            lutrevlow[1] = temp
            loop_thru -= 1
    lutrev.extend(lutrevlow)
    return lutrev

def move13(x,C):
    lut = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'
    lut = list(lut)
    x = list(x)
    if C > 0:
        newrotation = rotationrotate(C)
    
    
    
    acc = 0
    for i in x:
        temp = 0
        for h in lut:
            if i == h:
                x[acc] = newrotation[temp]
            temp += 1
        acc += 1
        answer = ''.join(x)
    return answer

        

    

if __name__ == "__main__":
    main()
