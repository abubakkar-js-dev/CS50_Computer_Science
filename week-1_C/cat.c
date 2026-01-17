#include <stdio.h>

int main(void){
    printf("Enter a Number: ");
    int c = getchar();
    printf("You entered: %c\n", c);
    for(int i = 1; i <= c; i++){
        printf("This is line number %d\n", i);
    }
    return 0;
}