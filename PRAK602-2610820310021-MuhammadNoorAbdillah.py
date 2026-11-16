n = int(input())
a = list(map(int, input().split()))
print(*[x * (i + 1) for i, x in enumerate(a)])