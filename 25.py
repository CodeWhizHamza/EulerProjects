def main():
    i = 1
    while len(str(fib(i))) < 1000:
        i += 1

    print("Fibonnaci number having digits has index:", i)


def fib(n):
    if n == 1 or n == 2:
        return 1

    prev = 1
    current = 1
    for _ in range(n - 2):
        next = current + prev
        prev = current
        current = next

    return current


if __name__ == "__main__":
    main()
