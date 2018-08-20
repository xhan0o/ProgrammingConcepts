def d2b(n):
    b, i = 0 , 0
    while (n != 0):
        bd = n % 2
        b = b + bd*(10**i)
        n = n//2
        i += 1
    print b

def b2d(n):
    res,i =0,0
    while (n != 0):
        dec = n % 10
        res = res + dec*(2**i)
        n = n // 10
        i += 1
    print res

def d2h(n):
    string = ''
    while (n != 0):
        dec = n % 16
        if (dec > 9):
            dec = dec + 87
        elif (dec < 9):
            dec = dec + 48
        #print chr(dec)
        string += chr(dec)
        n = n // 16
    return string[::-1]

def h2d(string):
    string = string.lower()
    dec,res = 0,0
    for i in string:
        if ord(i) < 58:
            dec = ord(i) - 48
        if ord(i) > 96:
            dec = ord(i) - 87
        res = res*16 + dec
    return res

#d2b(9)
#b2d(101)
#d2h(175)
#h2d('AF')
#0 -> 48, A -> 65 , a -> 97
