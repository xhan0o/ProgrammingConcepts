import math
import time

def is_prime_v1(n):
    """ Return prime, True or False"""
    if n == 1:
        return False #Not prime

    for d in range(2,n):
        if n % d == 0:
            return False
    return True

def is_prime_v2(n):
    """ Traverse only till sqrt of n """
    if n == 1:
        return False

    div = math.floor(math.sqrt(n))
    for d in range(2, 1 + int(div)):
        if n % d == 0:
            return False
    return True

def is_prime_v3(n):
    prime = [2]
    for d in range(2,n):
        for i in prime:
            if d % i == 0:
                prime.append(d)

# -------- TIme Function --------
t0 = time.time()
for n in range(1,1000):
    #print (n, is_prime_v1(n)) #0.036Sec, Till 1000
    #print (n, is_prime_v2(n)) #0.024Sec, Till 1000
