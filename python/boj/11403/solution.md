```
# 제목 : [백준] 11403_경로 찾기 (Python)
# 태그 : boj, python, 그래프 이론, 플로이드-와샬
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/11403>
<br/><br/>

## 🤔 문제 접근 방법
___
그래프의 인접행렬이 주어진 것을 보고 플로이드-와샬을 떠올릴 수 있는 문제이다. `a`에서 `b`로 가는 경로가 없을 때, `k`를 통해 갈 수 있으면 `graph[a][b]`를 `1`로 바꿔 갈 수 있음을 저장하면 된다.
<br/><br/>

## 💡 코드 
___
```python
N = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]

for k in range(N):
    for a in range(N):
        for b in range(N):
            if graph[a][k] + graph[k][b] == 2:
                graph[a][b] = 1

for row in graph:
    print(' '.join(map(str, row)))

```
<br/><br/>

## 📔 참고
> 
