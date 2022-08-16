'''
    provide a number and it will return a list of 8 digits that multiply to the number provided it's possible to factor the number into 8 digits
    if it's not possible to factor the number into 8 digits, it will return an error
'''

def factor_into_8_digits(num): 
    if num > 9**8:
        print("Cannot be factorized into 8 digits")
        exit(1)
    if num == 0 or num == 1:
        return [num] * 8

    digits = []

    while num != 1:
        for i in range(9, 1, -1):
            if num % i == 0:
                num = num // i
                digits.append(i)
                break
            if i == 2:
                print("Prime factor consisting of more than 1 digit found: {}".format(num))
                exit(1)
    
    return digits + [1] * (8 - len(digits))

print(''.join(map(str, factor_into_8_digits(0x159fd8))))