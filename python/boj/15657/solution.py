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