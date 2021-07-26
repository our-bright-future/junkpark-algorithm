import sys
input = sys.stdin.readline
N, M = map(int, input().split())
nums = [0] + list(map(int, input().split()))

for i in range(2, N+1):
    nums[i] = nums[i] + nums[i-1]

for _ in range(M):
    a, b = map(int, input().split())
    print(nums[b]-nums[a-1])