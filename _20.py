import math
# print(sum([int(d) for d in str(math.factorial(100))]))


def main():
    print(f"Sum: {add_digits(factorial(100))}")


def factorial(n):
    value = 1
    for i in range(1, n + 1):
        value *= i
    return value


def add_digits(number):
    sum = 0
    while number != 0:
        sum += number % 10
        number //= 10

    return sum


if __name__ == "__main__":
    main()
