def is_pali(num):
    n = num
    rev,dec = 0,0
    while (n > 0):
        dec = n % 10
        rev = rev*10 + dec
        n = n // 10
    if (num == rev):
        return True, rev
    else:
        return False, rev

num = 1234567894
count = 0
while (count < 10):
    pal , rnum = is_pali(num)
    print pal , rnum, num, count
    if (pal == 1):
        break
    num = num + rnum
    count += 1
