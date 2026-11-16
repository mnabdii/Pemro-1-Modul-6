n = int(input())

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(n)]

print("Matriks AXB")
for i in range(n):
    baris = []
    for j in range(n):
        total = 0
        for k in range(n):
            total += A[i][k] * B[k][j]
        baris.append(total)
    print(*baris)