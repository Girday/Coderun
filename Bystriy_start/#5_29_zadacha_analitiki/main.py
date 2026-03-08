from math import sqrt

a, b, c = map(int, input().split())

d = b * b - 4 * a * c

if d < 0:
    print(0)
elif d > 0:
    x1 = (-b - sqrt(d)) / 2 / a
    x2 = (-b + sqrt(d)) / 2 / a
    print(f"{2}\n{x1:6f} {x2:6f}")
else:
    print(f"{1}\n{-b / 2 / a:.6f}")
