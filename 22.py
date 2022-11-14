def main():
    names = read_names_from_file("p022_names.txt")
    sorted_names = sorted(names)

    total_name_scores = 0

    for name in sorted_names:
        alphabetical_value = get_alphabetical_value_of(name)
        location_in_list = sorted_names.index(name) + 1

        total_name_scores += alphabetical_value * location_in_list

    print(total_name_scores)


def read_names_from_file(file):
    names = []
    with open(file) as f:
        for line in f.readlines():
            for name in [item.strip()[1:-1] for item in line.split(',')]:
                names.append(name)

    return names


def get_alphabetical_value_of(word):
    return sum([(ord(letter) + 1 - ord('A')) for letter in word.upper()])


if __name__ == "__main__":
    main()
