def count(S, m, n):
    # table = [0 for k in range(n+1)]
    table = [0] * (n+1)
    table[0] = 1

    for i in range(0,m):
        for j in range(S[i],n+1):
            print i, j , S[i], table[j],
            table[j] += table[j-S[i]]
            print table
    return table[n]

arr = [1,3,5]
m = len(arr)
n = 10
x = count(arr, m, n)
print x
