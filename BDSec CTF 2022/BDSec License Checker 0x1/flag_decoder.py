def ns_1(value): #this function takes a number and reverses it, for example ns_1(123) returns 321
    reversed = 0
    while value != 0:
        reversed = reversed * 10 + value % 10
        value = value // 10

    if reversed > 0 and reversed < 2:
        return 100
    elif reversed < 13:
        return reversed * 10
    else:
        return reversed

def decode_flag(): #this function decodes and prints the flag
    
    encoded_flag_as_list_of_number = [
        0x47, 0x5b, 0x2b, 0x65, 0x51, 0x146, 0x326, 99, 0x68, 0x14, 0x10, 0x28, 0x14, 0x40, 0x68, 
        0x196, 0x14, 0x68, 0x2c2, 0x14, 0x1a0, 0x40, 0x59, 0x1a, 99, 0x40, 10, 0x59, 10, 10, 0x20e
    ]

    print()
    for item in encoded_flag_as_list_of_number:
        print(chr(ns_1(item-5)), end='')
    print("\n")

decode_flag()


