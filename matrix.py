# Matrices
A = [[1, 2, 3],
     [4, 5, 6]]

B = [[7, 8, 9],
     [10, 11, 12]]

C = [[1, 2],
     [3, 4],
     [5, 6]]

# ---------------------------
# a) Transpose of A
rows = len(A)
cols = len(A[0])
transpose_A = [[0 for _ in range(rows)] for _ in range(cols)]

for i in range(rows):
    for j in range(cols):
        transpose_A[j][i] = A[i][j]

print("Transpose of A:")
print(transpose_A)

# ---------------------------
# b) Sum of A and B
sum_AB = [[0 for _ in range(cols)] for _ in range(rows)]

for i in range(rows):
    for j in range(cols):
        sum_AB[i][j] = A[i][j] + B[i][j]

print("\nSum of A and B:")
print(sum_AB)

# ---------------------------
# c) Product of A and C
rows_A = len(A)
cols_A = len(A[0])
rows_C = len(C)
cols_C = len(C[0])

product_AC = [[0 for _ in range(cols_C)] for _ in range(rows_A)]

for i in range(rows_A):
    for j in range(cols_C):
        for k in range(cols_A):
            product_AC[i][j] += A[i][k] * C[k][j]

print("\nProduct of A and C:")
print(product_AC)
