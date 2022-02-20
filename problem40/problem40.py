result = 1
i = 1
champernowne = ""
while i <= 1000000:
    i_str = str(i)
    champernowne += i_str 
    i += 1


result *= ord(champernowne[0]) - 48
result *= ord(champernowne[9]) - 48
result *= ord(champernowne[99]) - 48
result *= ord(champernowne[999]) - 48
result *= ord(champernowne[9999]) - 48
result *= ord(champernowne[99999]) - 48
result *= ord(champernowne[999999]) - 48

print(result)

