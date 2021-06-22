```
# 제목 : [백준] 15652_N과 M (4) (Python)
# 태그 : boj, python, 백트래킹
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/15652>
<br/><br/>

## 🤔 문제 접근 방법
___
`depth`가 맞지 않으면 `now`에 숫자를 `append`하고 `depth`에 도달하면 `now`를 출력한다. 중요한 아이디어는 `return` 후, `now.pop()`을 하여 모두 탐색하게 하는 것이 중요하다.
<br/><br/>

## 💡 코드 
___
```python
N, M = map(int, input().split())

def brute_force(depth, now:list):
    if depth == M:
        print(' '.join(map(str,now)))
        return

    for i in range(1, N+1):
        try:
            if i < now[-1]:
                continue
        except:
            pass
        now.append(i)
        brute_force(depth+1, now)
        now.pop()

brute_force(0, [])
```
<br/><br/>

## 📔 참고
> 
