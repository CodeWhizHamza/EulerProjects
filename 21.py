"""
It's wrong I can't understand the problem right now.
"""


def main():
    total = 0
    for a in range(1, 10000 + 1):
        first_number_factors_sum = add_factors(a)
        second_number_factors_sum = add_factors(first_number_factors_sum)

        if second_number_factors_sum == a:
            total += a
        # for b in range(1, 10000 + 1):
        #     second_number_factors_sum = add_factors(b)
        #     print(f"Outer: {a}, Inner: {b}\r", end="")
        #     if a == second_number_factors_sum or b == first_number_factors_sum:
        #         total += a + b

    print()
    print(total * 2)


def add_factors(n):
    return sum(get_factors(n))


def get_factors(n):
    factors_list = []

    for i in range(1, n // 2 + 1):
        if n % i == 0:
            factors_list.append(i)

    return factors_list


if __name__ == "__main__":
    main()
