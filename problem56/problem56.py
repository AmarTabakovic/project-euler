a = 0
b = 0
max_result = 0
while a < 100:
    while b < 100:
        product = a ** b
        str_num = str(product)
        
        result = 0

        for s in str_num:
            c = ord(s) - 48
            result += c

        if result > max_result:
            max_result = result

        b += 1
    b = 0
    a += 1

print(max_result)
