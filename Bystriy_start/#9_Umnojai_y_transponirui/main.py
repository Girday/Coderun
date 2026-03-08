def transpon(matrix):
    col_len = len(matrix)
    row_len = len(matrix[0])
    
    transponded = [[0] * col_len for _ in range(row_len)]

    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            transponded[j][i] = matrix[i][j]
    
    return transponded


def multiply(mat1, mat2):
    col_len = len(mat1)
    row_len = len(mat2[0])

    multiplied = [[0] * row_len for _ in range(col_len)]
    
    for i in range(len(multiplied)):
        for j in range(len(multiplied[i])):
            multiplied[i][j] = sum(mat1[i][k] * mat2[k][j] for k in range(len(mat2)))

    return multiplied


def matprint(matrix):
    for row in matrix:
        print(*row, sep=" ")


n, m, k = map(int, input().split())

a, b = [], []

for _ in range(n):
    a.append([int(x) for x in input().split()])

for _ in range(m):
    b.append([int(x) for x in input().split()])


matprint(transpon(multiply(a, b)))
