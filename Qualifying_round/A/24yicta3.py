n = int(input())
k = int(input())
ans = 0
v = k
while v > 0:
    x = n // v
    u = n // (x + 1) + 1
    ans += x * (v - u + 1)
    v = u - 1
print(ans)
