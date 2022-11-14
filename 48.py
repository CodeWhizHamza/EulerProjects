total = 0

for i in range(1, 1000 + 1):
    total += pow(i, i)

print(str(total)[-10:])
