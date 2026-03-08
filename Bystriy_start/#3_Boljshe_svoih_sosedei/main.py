elements = list(map(int, input().split()))
c = 0
for i in range(1, len(elements) - 1):
    first, second, third = elements[i - 1 : i + 2]
    if first < second > third:
        c += 1
print(c)
