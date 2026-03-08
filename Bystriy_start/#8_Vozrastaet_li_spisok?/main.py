a = input().split()
for i in range(len(a) - 1):
    if a[i + 1] <= a[i]:
        print("NO")
        exit()
print("YES") 
