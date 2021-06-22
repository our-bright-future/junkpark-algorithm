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