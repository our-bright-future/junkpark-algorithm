```
제목 : [백준] 5014_스타트링크 (Python)
태그 : boj, python, 그래프 이론, 그래프 탐색, 너비 우선 탐색
```
# 🌏 문제 주소
<https://www.acmicpc.net/problem/5014>
<br/><br/>

# 🤔 문제 접근 방법
___
방문한 지 여부를 저장하는 `visited`와 `bfs`를 통해 현재 위치에서 U을 누르는 경우와 D를 누르는 경우를 구해 다음 위치를 방문하지 않았고 층 수의 범위에 들어가면 `q`에 추가하여 반복하였다.
<br/><br/>

# 💡 코드 
___
```python
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
```
<br/><br/>
# 📔 참고
> 
