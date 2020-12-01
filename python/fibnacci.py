def fib(x):
    if(x==0):
        return 0
    if (x==1):
        return 1
    if(x>=2):
        return fib(x-2)+fib(x-1)

y=20

for x in range(y):
    print(fib(x))