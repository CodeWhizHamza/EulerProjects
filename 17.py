from num2words import num2words

total = 0
for i in range(1, 1000 + 1):
    total += len("".join("".join(num2words(i).split(" ")).split("-")))

print(total)
