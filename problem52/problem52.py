n = 1

while True:
    freq1 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}
    freq2 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}
    freq3 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}
    freq4 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}
    freq5 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}
    freq6 = {"1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, "8": 0, "9": 0, "0": 0}

    x1 = str(n)
    x2 = str(2 * n)
    x3 = str(3 * n)
    x4 = str(4 * n)
    x5 = str(5 * n)
    x6 = str(6 * n)

    for i in x1:
        freq1[i] += 1
    for i in x2:
        freq2[i] += 1
    for i in x3:
        freq3[i] += 1
    for i in x4:
        freq4[i] += 1
    for i in x5:
        freq5[i] += 1
    for i in x6:
        freq6[i] += 1

    if freq1 == freq2 == freq3 == freq4 == freq5 == freq6:
        print(n)
        break
    
    n += 1
