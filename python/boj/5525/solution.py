N = int(input())
M = int(input())
s = input()

cnt = 0
i = 0
ans = 0
while i <= M - 3:
    if s[i] == 'I' and s[i+1] == 'O' and s[i+2] == 'I':
        cnt += 1
        i += 2
        if cnt == N:
            ans += 1
            cnt -= 1
    else:
        i += 1
        cnt = 0
print(ans)

