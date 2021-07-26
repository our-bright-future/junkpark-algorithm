N = int(input())
ans = abs(100-N)

broken = int(input())
if broken:
    broken_buttons = input().split()
for click in range(0, 1000001):
    is_clickable = True
    for broken_button in broken_buttons:
        if broken_button in list(str(click)):
            is_clickable = False
    if is_clickable:
        ans = min(ans, len(str(click)) + abs(click-N))
print(ans)
