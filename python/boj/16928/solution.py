n, m = map(int, input().split())
dp = [-1] * (100 + 1)

ladders = {}
for _ in range(n):
    a, b = map(int, input().split())
    ladders[a] = b

snakes = {}
for _ in range(m):
    a, b = map(int, input().split())
    snakes[a] = b

def bfs(start):
    from collections import deque
    q = deque([(start, 0)])
    dp[start] = 0
    while q:
        now, rolled = q.popleft()
        for dice in range(1, 7):
            next = now + dice
            if 1 <= next <= 100:
                if dp[next] == -1:
                    dp[next] = rolled + 1
                    if ladders.get(next):
                        q.append((ladders.get(next), rolled + 1))
                        dp[ladders.get(next)] = rolled + 1
                    elif snakes.get(next):
                        q.append((snakes.get(next), rolled + 1))
                        dp[snakes.get(next)] = rolled + 1
                    else:
                        q.append((next, rolled + 1))

bfs(1)
print(dp[100])