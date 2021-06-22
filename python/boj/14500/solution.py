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
