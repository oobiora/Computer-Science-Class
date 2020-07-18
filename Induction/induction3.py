import random
# prove: every even number is followed by an odd number
# basis N = 2 => N+1 = 3 (evn % 2 = 0 odd % 2 = 1)
# Inductive:
# assume N is evn
# show N+1 is odd
# (N+1)%2
# N%2 + 1%2 = 0 + 1 != 0
# Must be odd

def main():
    N = random.randint(1,11)
    X = N+1
    equation = (3**N)-1

    
    for i in range(N,N+2):
        if equation % 2 == 0:
            print "The N ",N," becomes ", equation, " and has a modulo 2 of ", equation % 2
        else: 
            print "The N ",N," becomes ", equation, " and has a modulo 2 of ", equation % 2
        N += 1
        

if __name__ == "__main__":
    main()