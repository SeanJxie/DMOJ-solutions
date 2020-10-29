abc = "abcdefghijklmnopqrstuvwxyz"
c = 0
for _ in range(int(input())):
    for char in input():
        if char in abc:
            c += 1
        else:
            break

    if c == 26:
        print("OK.")
    else:
        print("Nope.")

    c = 0
