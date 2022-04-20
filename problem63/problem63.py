x = 0
for i in range(1, 100):
    for j in range(1, 100):
        i_pow_j = i ** j
        if len(str(i_pow_j)) == j:
            x += 1
print(x)
