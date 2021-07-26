```
# 제목 : [백준] 5525_IOIOI (Python)
# 태그 : boj, python, 문자열
```
## 🌏 문제 주소
___
<https://www.acmicpc.net/problem/5525>
<br/><br/>

## 🤔 문제 접근 방법
___
초기에는 `s.startswith`로 하나하나 계산했는데, 시간초과가 나서, 연속된 문자열을 세는 방식으로 짜게 되었다.
인덱스 `i`를 기준으로 `s[i]`, `s[i+1]`, `s[i+2]`가 각각 `'I'`, `'O'`, `'I'`라면 `cnt`에 `1`을 더해주며, `i`에는 `2`를 더해준다. 만약 `'I'`, `'O'`, `'I'`가 아니라면 `cnt`를 `0`으로 만든다. `cnt`가 `N`이 되면 `ans`에 `1`을 더해주고, `cnt`에서 `1`을 빼주면 풀 수 있다.
<br/><br/>

## 💡 코드 
___
```python
N = int(input())
M = int(input())
s = input()

cnt = 0
i = 0
ans = 0
while i <= M - 3:
    if s[i] == 'I' and s[i+1] == 'O' and s[i+2] == 'I':
        cnt += 1
        i += 2
        if cnt == N:
            ans += 1
            cnt -= 1
    else:
        i += 1
        cnt = 0
        
print(ans)

```
<br/><br/>

## 📔 참고
> 
