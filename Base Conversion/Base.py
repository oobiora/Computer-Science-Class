def exponent(a,b):
    temp = 1
    acc = 1
    while(temp <= b):
        acc = acc * a
        temp += 1
    return acc

def base10_to_baseN(x,N):
    converted_number =[]
    x = int(x)
    N = int(N)
    while(x > 0):
        new_number = 0
        if ((x%N) > 9):
            new_number = (chr((ord('A') - 1) + ((x%N) - 9)))      
        else:
            new_number = (x%N)
                
        converted_number.append(new_number)

        x = (x/N)

    converted_number.reverse()
    print converted_number
    
def baseN_to_base10(N,b):
    b = int(b)
    unconverted_num = list(N)
    new_number = []
    for i in unconverted_num:
        if ord(i) < 58:
            new_number.append(int(i))
        else:
            new_number.append((ord(i) - ord('A') + 10))
    acc = 0
    g = 0
    new_number.reverse()
    for i in new_number:
        acc += i * exponent(b,g)
        g += 1
    new_number.reverse()
    return acc
    


    


initial_base = raw_input("Give me the first base: ")
converted_base = raw_input("Give me second base: ")
unconverted_number = raw_input("Give me the number you wish to convert: ")
converted_num = 0

if (int(initial_base) != 10) and (int(initial_base) <= 35) and int(initial_base) > 0:
    converted_num = baseN_to_base10(unconverted_number,initial_base)
    converted_num = base10_to_baseN(converted_num,converted_base)
elif int(initial_base) == 10:
    converted_num = base10_to_baseN(unconverted_number,converted_base)
else:
    print "Error make sure you are in the range 1 and 36"





