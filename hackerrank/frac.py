from fractions import Fraction
from functools import reduce

n = int(input())
# create an empty list
lst = []
for i in range(n):
    # get the curent input as a list
    mylst = list(map(int,input().split()))
    # append it to the main list
    lst.append(mylst)

# lst_2 is the list of all 0th elements of each sublist of lst
lst_2 = [sublst[0] for sublst in lst]
# lst_3 is the list of all 1st elements of each sublist of lst
lst_3 = [sublst[1] for sublst in lst]

# if you pass the lambda function without surrounding (), the iterpreter treates 'lambda x' as first argument,
#  'y: x*y' as second argument, and lst_2 as third argument
# that's why it gives the 'non-iterable' error because it expects the second argument to be iterable
num = reduce((lambda x, y : x * y),lst_2)
den = reduce((lambda x, y : x * y),lst_3)

from fractions import gcd
# now directly calling the gcd function and storing the result immediately in num causes 
# loss of the value of num for the next step, so backup them first
num1 = num
den1 = den

# now for simplifying the fractions, we need to divide each of the num1 and den1 by gcd
num1 = num1 // reduce(gcd, [num, den])
den1 = den1 // reduce(gcd, [num, den])

# or use nested reduce, like this:
'''
num1 = reduce((lambda x, y : x // y), [num1, reduce(gcd, [num, den])]) 
den1 = reduce((lambda x, y : x // y), [den1, reduce(gcd, [num, den])])
'''

print(num1)
print(den1)