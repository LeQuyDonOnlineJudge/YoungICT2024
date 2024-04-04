k = int(input())
cnt = 5
sz = 1
while cnt * sz < k:
    k -= cnt * sz
    sz += 1
    cnt *= 5
s = []
for i  in range(sz):
    cnt //= 5
    for j in '13579':
        if cnt * sz < k:
            k -= cnt * sz
        else:
            s.append(j)
            break
print(s[k - 1])
