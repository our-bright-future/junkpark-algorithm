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