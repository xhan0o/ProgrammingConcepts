def isPali(n):
    rnum = n
    res, i = 0,0
    while (rnum != 0):
        dec = rnum % 10
        res = res*10 + dec
        rnum = rnum // 10
    if n == res:
        return True
    return False

n = 121
print isPali(n)
