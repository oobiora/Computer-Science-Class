#things needed .list turn a string to array
#.reverse reverse array
#.index find index of array item
def main():
    #ask for number
    number1 = raw_input("number one")
    #ask for base
    number2 = raw_input("the number you want to add")
    #ask for base
    base2 = raw_input("the base of the numbers")


#mult
    answer = bN_10(number1,base2) * bN_10(number2,base2)
    print answer 
    print "The answer in base 10"
    print b10_N(answer,base2)
    print "ans in base N"
    print "^ multiply"
#add
    answer = bN_10(number1,base2) + bN_10(number2,base2)
    print answer 
    print "The answer in base 10"
    print b10_N(answer,base2)
    print "ans in base N"
    print "^ add"

def lutnumletter(number):
    lut = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lut = list(lut)
    ans = lut[number]
    return ans

    #matches index with letter in lut

def lettertonumberconvert(theIndex):
    lut = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lut = list(lut)
    ans = lut.index(theIndex)
    int(ans)
    return ans

    #matches letter in lut to index







def b10_N(var1,base):
    var1 = int(var1)
    base = int(base)
    conv_from_10 = []
    while(var1>0):
        conv_from_10.append(lutnumletter(var1%base))
        var1=var1/base
    conv_from_10.reverse()
    return conv_from_10

def bN_10(m,baseNum):
    answer=0
    baseNum = int(baseNum)
    m = list(m)
    m.reverse()
    multiple = 0
    for letter in m:
        answer+= lettertonumberconvert(letter) * (baseNum**multiple)
        multiple+=1
    return answer




if __name__ == "__main__":
    main()