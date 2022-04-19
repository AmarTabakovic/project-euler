result = 0
i = 0
while i < 1000000:
    temp = 0
    for x in str(i):
        temp += int(x) ** 5
    if temp != 1 and temp == i:
        result += temp
    i += 1
print(result)

