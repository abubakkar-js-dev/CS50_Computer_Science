#include<stdio.h>
#include<string.h>

int fibonacci(int n);

int main(void)
{
    int n;
    printf("Fibonacci of: ");
    scanf("%i",&n);
   int fibonacci_num = fibonacci(n);
    printf("Fibonacci of %i is %i\n",n,fibonacci_num);

    return 0;
}

int fibonacci(int n)
{
    if(n ==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }

    // return fibonacci(n-1) + fibonacci(n-2);
    int a = 0, b = 1;
    int next_num;
    for(int i = 2; i <= n; i++){
        next_num = a + b;
        a = b;
        b = next_num;
    }
    return b;

}
