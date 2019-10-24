"""
Canadian Computing Competition: 2000 Stage 1, Junior #2
The digits 0, 1, and 8 look much the same if rotated 180 degrees on the page (turned upside down). Also, the digit 6
looks much like a 9, and vice versa, when rotated 180 degrees on the page. A multi-digit number may also look like
itself when rotated on the page; for example 9966 and 10801 do, but 999 and 1234 do not.

You are to write a program to count how many numbers from a given interval look like themselves when rotated 180 degrees
 on the page. For example, in the interval [1…100] there are six: 1, 8, 11, 69, 88, and 96.

Your program should take as input two integers, m and n, which define the interval to be checked, 1≤m≤n≤32000. The
output from your program is the number of rotatable numbers in the interval.

You may assume that all input is valid.
"""


def check(s):
    rotatable = ('0', '1', '8')
    lt = len(s)
    # Split the string into 2 sections.
    # The second section is reversed so that the 2 sections can easily matched.
    first = s[:lt // 2]
    second = s[:lt // 2:-1]
    mid = s[lt // 2]
    ltf = len(first)

    def do_loop():
        checked = 0
        for i in range(ltf):
            if first[i] == second[i] and first[i] in rotatable:
                checked += 1

            elif (first[i] == '6' and second[i] == '9') or (first[i] == '9' and second[i] == '6'):
                checked += 1

        if checked == ltf:
            return True

    if s in rotatable:
        return True

    elif lt % 2 != 0:
        if mid in rotatable:
            if do_loop():
                return True

    elif lt % 2 == 0:
        second = s[:lt // 2 - 1:-1]
        if do_loop():
            return True


m = int(input())
n = int(input())
count = 0

for num in range(m, n + 1):
    if check(str(num)):
        print(num)
        count += 1

print(count, 'reversible numbers.')
