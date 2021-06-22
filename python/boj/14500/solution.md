```
제목 : [백준] 14500_테트로미노 (Python)
태그 : boj, python, 구현, 브루트포스 알고리즘
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/14500>
<br/><br/>

## 🤔 문제 접근 방법
___
프로그래머스에서 본 [자물쇠와 열쇠](https://programmers.co.kr/learn/courses/30/lessons/60059 "프로그래머스")가 생각났고 N과 M이 500이라 `브루트포스`를 이용해 O(N<sup>2</sup>) 로 풀었다.
무식하게 `tetromino`의 배열을 담은 `tetromioes`를 수작업으로 만들었고, 각 `tetromino`의 `height`와 `width`에 따라 탐색하는 범위를 나누었고, `tetromino`의 값이 `1`이라면 `cnt`에 더해 `ans`보다 커지면 `ans`에 넣어주도록 하였다.
<br/><br/>

## 💡 코드 
___
```python
tetrominoes = [
    [[1, 1, 1, 1]],
    [[1],
     [1],
     [1],
     [1]],

    [[1, 1],
     [1, 1]],

    [[1, 0],
     [1, 0],
     [1, 1]],
    [[1, 1, 1],
     [1, 0, 0]],
    [[1, 1],
     [0, 1],
     [0, 1]],
    [[0, 0, 1],
     [1, 1, 1]],

    [[0, 1],
     [0, 1],
     [1, 1]],
    [[1, 0, 0],
     [1, 1, 1]],
    [[1, 1],
     [1, 0],
     [1, 0]],
    [[1, 1, 1],
     [0, 0, 1]],

    [[1, 0],
     [1, 1],
     [0, 1]],
    [[0, 1],
     [1, 1],
     [1, 0]],
    [[0, 1, 1],
     [1, 1, 0]],
    [[1, 1, 0],
     [0, 1, 1]],
    
    
    [[1, 1, 1],
     [0, 1, 0]],
    [[0, 1, 0],
     [1, 1, 1]],
    [[1, 0],
     [1, 1],
     [1, 0]],
    [[0, 1],
     [1, 1],
     [0, 1]],
]
import sys
input = sys.stdin.readline

def solution():
    N, M = map(int, input().split())
    graph = [list(map(int, input().split())) for _ in range(N)]
    ans = 0
    for tetromino in tetrominoes:
        height = len(tetromino)
        width = len(tetromino[0])
        for x in range(N+1 - height):
            for y in range(M+1 - width):
                cnt = 0
                for dx in range(height):
                    for dy in range(width):
                        nx = x + dx
                        ny = y + dy
                        if tetromino[dx][dy] == 1:
                            cnt += graph[nx][ny]
                ans = max(ans, cnt)
    print(ans)

solution()

```
<br/><br/>

## 📔 참고
> 
