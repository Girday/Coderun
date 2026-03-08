def NOD(a, b):
    while b:
        b, a = a % b, b
    return a


def NOK(a, b):
    return a * b // NOD(a, b)


a, b = map(int, input().split())
print(NOD(a, b), NOK(a, b), sep=" ")
