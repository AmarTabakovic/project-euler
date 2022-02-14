file = open("names.txt", "r")
content = file.read()
names = content.split(",")
file.close()

names.sort()

result = 0

for i, n in enumerate(names):
    sum_chars = 0
    name = n.strip('"')
    for char in name:
        sum_chars += ord(char) - 64
    res = (i + 1) * sum_chars
    result += res

print(result)
