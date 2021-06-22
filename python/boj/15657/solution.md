```
# 제목 : [백준] 15657_N과 M (8) (Python)
# 태그 : boj, python, 백트래킹
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/15657>
<br/><br/>

## 🤔 문제 접근 방법
___
방금 푼 [15652](https://www.acmicpc.net/problem/15652) 문제와 매우 비슷한 문제이다. `nums`를 입력받아 `sort`한 후, [15652](https://www.acmicpc.net/problem/15652)와 같이 풀어주면 된다. 간단하게 `depth`가 `M`이 되면 `join`해서 출력하고, `return` 될 때 가장 마지막 값을 `pop`해주면 된다.
<br/><br/>

## 💡 코드 
___
```python
N, M = map(int, input().split())
nums = sorted(list(map(int, input().split())))

def back_tracking(depth, ans=[]):
    if depth == M:
        print(' '.join(map(str, ans)))
        return
    else:
        for num in nums:
            if ans:
                if num < ans[-1]:
                    continue
            ans.append(num)
            back_tracking(depth+1, ans)
            ans.pop()

back_tracking(0)
```
<br/><br/>

## 📔 참고
> 
