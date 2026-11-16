b, k = map(int, input().split())
a = list(map(int, input().split()))
for i in range(b):
    print(*a[i * k:(i + 1) * k])