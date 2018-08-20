def Pali_rev(num):
    n = num
    dec,i,res = 0,0,0
    while(n > 0):
        dec = n % 10
        res = res*(10) + dec
        n = n // 10
    print res
    if (res == num):
        return True,res
    else:
        return False,res

def rev(s):
    r = s.split(' ')
    print r,r[-2]
    d = {'a','e','i','o','u','A','E','I','O','U'}
    for i in s:
        if i in d:
            s = s.replace(i,'')
    print s
    return ' '.join(r[::-1])







print rev("I am shantanu")

# t = False
# x = 551
# while (t!=True):
#     t,r = Pali_rev(x)
#     print x,r
#     x = x + r
