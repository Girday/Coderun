from sys import stdin

a = set()
for line in stdin:
    for x in line.split():
        a.add(x.strip(" "))
print(len(a))

