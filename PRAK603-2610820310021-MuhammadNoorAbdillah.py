n1, n2 = map(int, input().split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    print(*[a[i] * b[i] for i in range(n1)])