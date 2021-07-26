```
제목 : [백준] 1107_비밀번호 찾기 (Python)
태그 : boj, python, 자료 구조, 해시를 사용한 집합과 맵
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/1107>
<br/><br/>

## 🤔 문제 접근 방법
___
비밀번호를 찾는 문제이다. 각 사이트와 비밀번호가 입력되면 저장한 후, 사이트가 입력되면 그에 맞는 비밀번호를 출력하면 된다. 이런 문제는 `dict`를 사용해 `해시`를 사용하면 빠르게 구할 수 있다.
<br/><br/>

## 💡 코드 
___
```python
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
dic = {}
for _ in range(N):
    a, b = input().rstrip().split()
    dic[a] = b

for _ in range(M):
    print(dic[input().rstrip()])
```
<br/><br/>
## 📔 참고
> 
