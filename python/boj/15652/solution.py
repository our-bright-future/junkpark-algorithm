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