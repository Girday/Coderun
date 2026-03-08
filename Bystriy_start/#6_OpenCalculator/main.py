digits = set(input().split())
n = set(input())

count = 0
for digit in n:
    if digit not in digits:
        count += 1

print(count)
