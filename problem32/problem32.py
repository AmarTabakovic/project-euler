products = set()
mult = set()

g = 0
while g < 2000:
    if "0" in str(g):
        g += 1
        continue
    freq = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0}
    for x in str(g):
        freq[x] += 1
    addable = True    
    for x in freq.values():
        if x > 1:
            addable = False
            break
    if addable:
        mult.add(g)
    g += 1

for i in mult:
    for j in mult:
        i_j = i * j
        d = str(i) + str(j) + str(i_j)
        if len(d) != 9 or "0" in d:
            continue
        if "".join(sorted(d)) == "123456789":
            products.add(i_j)

print(sum(products))

