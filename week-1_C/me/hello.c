#include<stdio.h>
#include<string.h>

int main(void){
    char fullName[100] = "";
    printf("What is your name? ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("hello, %s",fullName);

    return 0;
}
