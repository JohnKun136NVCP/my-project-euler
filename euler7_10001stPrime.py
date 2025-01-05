def is_prime(num):
    if num <= 1:
        return False
    for k in range(2, int(num ** 0.5) + 1):
        if num % k == 0:
            return False
    return True

def getNthPrime(primePosition):
    count = 0
    num = 2
    while True:
        if is_prime(num):
            count += 1
            if count == primePosition:
                return num
        num += 1

print(getNthPrime(10001))

