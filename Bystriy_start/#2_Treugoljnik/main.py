a = sorted([int(input()) for _ in range(3)])
print("YES" if a[-1] < a[0] + a[1] else "NO")
