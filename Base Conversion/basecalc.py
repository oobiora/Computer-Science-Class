def main():        
    first_number = raw_input("give me the first number: ")
    first_base = raw_input("give me the base of the first number: ")
    second_number = raw_input("give me the second number: ")
    second_base = raw_input("give me the second base: ")
    opperation = raw_input("What would math operation would you like to preform + / * -: ")
    if opperation == '+':
        print add_bases(first_number,first_base,second_number,second_base)
    elif opperation == '-':
        print sub_bases(first_number,first_base,second_number,second_base)
    elif opperation == '*':
        print multiply_bases(first_number,first_base,second_number,second_base)
    else:
        print divide_base(first_number,first_base,second_number,second_base)

# function that exponentiates
def exponent(a,b): 
    temp = 1
    acc = 1
    while(temp <= b):
        acc = acc * a
        temp += 1
    return acc

def base10_to_baseN(x,N): #conversion from base 10 to base N
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
    
def baseN_to_base10(N,b): # baseN to base10
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

def add_bases(numOne,B1,numTwo,B2): #converts base N to 10 and preforms opperation
    addNumOne = 0
    addNumTwo = 0
    if int(B1) != 10:
        addNumOne = int(baseN_to_base10(numOne, B1))
    else:
        addNumOne = int(numOne)
    if int(B2) != 10:
        addNumTwo = int(baseN_to_base10(numTwo, B2))
    else:
        addNumTwo = int(numTwo)
    return addNumOne + addNumTwo
def sub_bases(numOne,B1,numTwo,B2):#converts base N to 10 and preforms opperation
    subNumOne = 0
    subNumTwo = 0
    if int(B1) != 10:
        subNumOne = int(baseN_to_base10(numOne, B1))
    else:
        subNumOne = int(numOne)
    if int(B2) != 10:
        subNumTwo = int(baseN_to_base10(numTwo, B2))
    else:
        subNumTwo = int(numTwo)
    return subNumOne - subNumTwo

def multiply_bases(numOne,B1,numTwo,B2):#converts base N to 10 and preforms opperation
    multiplyNumOne = 0
    multiplyNumTwo = 0
    if int(B1) != 10:
        multiplyNumOne = int(baseN_to_base10(numOne, B1))
    else:
        multiplyNumOne = int(numOne)
    if int(B2) != 10:
        multiplyNumTwo = int(baseN_to_base10(numTwo, B2))
    else:
        multiplyNumTwo = int(numTwo)
    return int(multiplyNumOne) * int(multiplyNumTwo)

def divide_base(numOne,B1,numTwo,B2):#converts base N to 10 and preforms opperation
    divideNumOne = 0.0
    divideNumTwo = 0.0
    if int(B1) != 10:
        divideNumOne = float(baseN_to_base10(numOne, B1))
    else:
        divideNumOne = float(numOne)
    if int(B2) != 10:
        divideNumTwo = float(baseN_to_base10(numTwo, B2))
    else:
        divideNumTwo = float(numTwo)
    divideAnswer = divideNumOne / divideNumTwo
    return divideAnswer

def printArray(arrayOne): # a function that prints arrays
    for i in arrayOne:
        temp += i
    return temp


if __name__ == "__main__":
    main()
# initial_base = raw_input("Give me the first base: ")
# converted_base = raw_input("Give me second base: ")
# unconverted_number = raw_input("Give me the number you wish to convert: ")
# converted_num = 0




# if (int(initial_base) != 10) and (int(initial_base) < 35) and int(initial_base) > 0:
#     converted_num = baseN_to_base10(unconverted_number,initial_base)
#     converted_num = base10_to_baseN(converted_num,converted_base)
# elif int(initial_base) == 10:
#     converted_num = base10_to_baseN(unconverted_number,converted_base)
# else:
#     print "Error make sure you are in the range 1 and 36"





