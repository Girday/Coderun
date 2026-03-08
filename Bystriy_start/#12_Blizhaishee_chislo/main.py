n = int(input())
a = list(map(int, input().split()))
f = int(input())

r = a[0]
for x in a:
    if abs(x - f) < abs(r - f):
        r = x

print(r)
