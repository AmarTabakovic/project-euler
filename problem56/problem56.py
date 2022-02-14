max_result = 0

for a in range(1, 100):
    for b in range(1, 100):
        product = a ** b
        str_num = str(product)
        
        result = 0

        for s in str_num:
            c = ord(s) - 48
            result += c

        if result > max_result:
            max_result = result

print(max_result)
