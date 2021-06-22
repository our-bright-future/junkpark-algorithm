```
제목 : [백준] 16928_뱀과 사다리 게임 (Python)
태그 : boj, python, 그래프 이론, 그래프 탐색, 너비 우선 탐색
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/16928>
<br/><br/>

## 🤔 문제 접근 방법
___
최단거리를 찾는 문제라 `bfs`를 통해 접근했다. `ladders`와 `snakes`에 사다리와 뱀을 저장하여 다음 위치가 `1. 사다리` `2. 뱀` `3. 일반`인 경우로 나눠 `q`에 `append`해주고 `q`가 빌 때까지 반복하였다.
<br/><br/>

## 💡 코드 
___
```python
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
```
<br/><br/>

## 📔 참고
> 
