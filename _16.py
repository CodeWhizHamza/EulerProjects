# print(sum([int(d) for d in [d for d in str(pow(2, 1000))]]))


def main():
    print(f"Sum: {add_digits(power(2, 1000))}")


def power(base, exponent):
    powered = 1
    for _ in range(exponent):
        powered *= base
    return powered


def add_digits(number):
    sum = 0
    while number != 0:
        sum += number % 10
        number //= 10

    return sum


if __name__ == "__main__":
    main()
