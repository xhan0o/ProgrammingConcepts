def countPrimes(n):
    """
    :type n: int
    :rtype: int
    """
    if n < 2:
        return 0
    prime = [True] * n
    prime[0] = prime [1] = False
    for i in xrange(2,n):
        if prime[i] == True :
            for j in xrange(2, (n-1)//i+1):
                prime[i*j] = False
    print prime
    j = 0
    for i in xrange(0,len(prime)):
        if prime[i]:
            print i

    return sum(prime)

print countPrimes(13)
