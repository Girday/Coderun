n = int(input())

t1, t2 = 1, 1

for i in range(n):
    t2, t1 = t1 + t2, t2

print(t2 - 1)
