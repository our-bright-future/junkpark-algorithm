from collections import deque
import sys

F, S, G, U, D = map(int, input().split())

visited = [False] * (F + 1)

q = deque([[S, 1]])
visited[S] = True

while q:
    now, button = q.popleft()
    if now == G:
        print(button - 1)
        sys.exit()
    for dnow in [U, -D]:
        next = now + dnow
        if 1 <= next <= F:
            if not visited[next]:
                visited[next] = button + 1
                q.append((next, button + 1))

print('use the stairs')