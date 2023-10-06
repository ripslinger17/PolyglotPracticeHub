# given number is prime or not
# import math

# def is_prime(p):
#     if p<2 and p%2==0:
#         return False
#     if p==2:
#         return True

#     d=math.isqrt(p)
#     for i in range(3,p+1,2):
#         if p%i==0:
#             return False
#     return True

# prime=int(input("Enter the number: "))
# if is_prime(prime):
#     print(f"{prime} is not prime")
# else:
#     print(f"{prime} is prime")


# in range of first and second number
import math


def is_prime(p):
    if p < 2:
        return False
    if p%2==0:
        return False
    if p == 2:
        return True

    d = math.isqrt(p)
    for i in range(3, p + 1,2):
        if p % i == 0:
            return False
    return True


primes = int(input("Enter the first number: "))
primel = int(input("Enter the last number"))
for i in range(primes, primel + 1):
    if is_prime(i):
        continue
    else:
        print(f"{i} is prime")
    