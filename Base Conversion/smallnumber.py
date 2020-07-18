def main():
    array = [2,3,4,3,1,3,1,2,1,0,-1,1,2,2,-2,-2,0,0]
    print(min_item_counter(array))

def min_item_counter(num_seq):
    smlnum = num_seq[0]
    acc = 0
    for i in num_seq:
        if smlnum > i:
            smlnum = i
    for i in num_seq:
        if i == smlnum:
            acc += 1
    return acc

if __name__ == "__main__":
    main()