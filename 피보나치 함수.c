#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n==0) return 0;

    else if(n==1)  return 1;
    else return (fib(n-1)+fib(n-2));
}

int main()
{
    int i,n;
    int result;

    printf("구하려는 피보나치의 값을 입력하세요:");
    
    scanf("%d",&n);
    result=fib(n);

    printf("\nfib(%d)=",n);
    if(n==0||n==1)
    {
        printf("%d\n\n",result);
    }
    else printf("%d+%d=%d\n\n",fib(n-2),fib(n-1),result);
    system("pause");
}