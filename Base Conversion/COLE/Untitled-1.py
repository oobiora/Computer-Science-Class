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