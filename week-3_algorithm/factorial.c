#include<stdio.h>
#include<string.h>

int factorial(int);

int main(void){
    int n;
    printf("Factorial of: ");
    scanf("%i",&n);
   int factorial_num = factorial(n);

    return factorial_num;
}

int factorial(int n){
    if(n <= 0){
        return 1;
    }
    return n * factorial(n-1);
}