n = int(input())
a = [input().split() for _ in range(n)]
f = input()

for pair in a:
    if f in pair:
        pair.remove(f)
        print(*pair)
