def main():
    s = raw_input("enter a message ")
    print(reverse(s))
    print(reverse(reverse(s)))


def low_rot(b):
    or_dic = "abcdefghijklmnopqrstuvwxyz"
    re_dic = "zyxwvutsrqponmlkjihgfedcba"
    or_dic = list(or_dic)
    re_dic = list(re_dic)
    #b = list(b)

    temp = 0
    for i in b:
        indexof_dic = 0
        for x in or_dic:
            if i == x:
                b[temp] = re_dic[indexof_dic]
            indexof_dic += 1
        temp += 1
    return b

def up_rot(w):
    or_dic = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    re_dic = "ZYXWVUTSRQPONMLKJIHGFEDCBA"
    or_dic = list(or_dic)
    re_dic = list(re_dic)
   # w = list(w)

    temp = 0
    for i in w:
        indexof_dic = 0
        for x in or_dic:
            if i == x:
                w[temp] = re_dic[indexof_dic]
            indexof_dic += 1
        temp += 1
    return w    

def reverse(d):
    d = list(d)
    d = up_rot(d)
    d = low_rot(d)
    return ''.join(d)
    

if __name__ == "__main__":
    main()
