max_result = 0

for a in range(1, 100):
    for b in range(1, 100):
        a_pow_b = a ** b
        str_num = str(a_pow_b)
        
        result = 0

        for s in str_num:
            c = ord(s) - 48
            result += c

        if result > max_result:
            max_result = result

print(max_result)
