```
제목 : [백준] 1753_최단경로 (Python)
태그 : boj, python, 그래프 이론, 다익스트라
```

## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/1753>
<br/><br/>

## 🤔 문제 접근 방법
___
`graph`에 각 간선이 연결되는 곳과 가중치를 저장한 후, 방문하지 않은 노드 중에서 가장 최단 거리가 짧은 노드를 선택하는 `다익스트라 알고리즘`을 활용하면 쉽게 풀 수 있다.
이 노드를 거치는 방법이 `dis`에 저장된 값보다 작다면 `dis`에 값을 갱신하고 `min_heap`에 추가하는 것을 반복하면 된다.
<br/><br/>

## 💡 코드 
___
```python
import heapq, sys
input = sys.stdin.readline

V, E = map(int, input().split())
start = int(input())
INF = 10e9
graph = [[] for _ in range(V+1)]

for _ in range(E):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

min_heap = []

def dijkstra(start):
    dis = [INF] * (V + 1)
    dis[start] = 0
    heapq.heappush(min_heap, (0, start))
    while min_heap:
        val, node = heapq.heappop(min_heap)
        for next_node, cost in graph[node]:
            cost += val
            if dis[next_node] <= cost:
                continue
            else:
                heapq.heappush(min_heap, (cost, next_node))
                dis[next_node] = cost
    return dis
l = dijkstra(start)
for i in l[1:]:
    print('INF' if i == INF else i)
```
<br/><br/>
## 📔 참고
> 
