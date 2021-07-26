```
# 제목 : [백준] 11659_구간 합 구하기 4 (Python)
# 태그 : boj, python, 누적 합
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/11659>
<br/><br/>

## 🤔 문제 접근 방법
___
`nums[i] = nums[i] + nums[i-1]`을 통해 `누적 합`을 구하면 된다. `a`, `b` 구간이 주어졌으므로, `nums[b] - nums[a-1]`을 출력하면 된다.
<br/><br/>

## 💡 코드 
___
```python
import sys
input = sys.stdin.readline
N, M = map(int, input().split())
nums = [0] + list(map(int, input().split()))

for i in range(2, N+1):
    nums[i] = nums[i] + nums[i-1]

for _ in range(M):
    a, b = map(int, input().split())
    print(nums[b]-nums[a-1])
```
<br/><br/>

## 📔 참고
> 
