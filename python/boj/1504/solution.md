```
# 제목 : [백준] 1504_특정한 최단 경로 (Python)
# 태그 : boj, python, 그래프 이론, 다익스트라
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/1504>
<br/><br/>

## 🤔 문제 접근 방법
___
`dijkstra`함수에서 `start`와 `target`을 넣어 `target`까지의 최단 거리를 구하고, `1 -> one -> two -> n`과 `1 -> two -> one -> n`중에 작은 거리를 출력하면 된다. 도달할 수 없으면 `INF`를 출력하므로 `INF`보다 작으면 `ans`를 출력한다.
<br/><br/>

## 💡 코드 
___
```python
import sys
input = sys.stdin.readline
N, E = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(E):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

one, two = map(int, input().split())

def dijkstra(start, target):
    import heapq
    INF = int(10e9)
    values = [INF] * (N + 1)
    h = []
    values[start] = 0
    heapq.heappush(h, (0, start))
    while h:
        cost, node = heapq.heappop(h)
        for next in graph[node]:
            if values[next[0]] > cost + next[1]:
                values[next[0]] = cost + next[1]
                heapq.heappush(h, (cost + next[1], next[0]))
    return values[target]


ans = min(dijkstra(1, one) + dijkstra(one, two) + dijkstra(two, N),
          dijkstra(1, two) + dijkstra(two, one) + dijkstra(one, N))

print(ans if ans < 10e9 else -1)
```
<br/><br/>

## 📔 참고
> 
