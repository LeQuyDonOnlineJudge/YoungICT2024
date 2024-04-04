a = int(input())
b = int(input())
c = int(input())
d = int(input())

x = max(a, c)
y = min(b, d)

if x < y:
    print(y - x)
else:
    print(0)
