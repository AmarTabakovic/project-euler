input_num = 20
solution = 0
x = 1
count = 0
while True:
    for i in range(1, input_num + 1):
        if x % i == 0:
            count += 1
    if count == input_num:
        solution = x
        break
    x += 1
    
print(solution)
