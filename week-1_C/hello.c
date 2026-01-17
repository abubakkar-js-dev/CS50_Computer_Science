#include <stdio.h>

char get_char(const char *prompt);

int main(void){
    printf("Hello, World!\n");
    // char c = 'B' get_char("Do you agreed with this? ");
    // char c = 'B';
    // if(c == 'y' || c == 'Y')
    // {
    //     printf("User agreed.\n");
    // }
    // else if
    //  (c == 'n' || c == 'N'){
    //     printf("User disagreed.\n");
    // }
    // else
    // {
    //     printf("Invalid input.\n");
    // }
    for(int i = 1; i <= 5; i++){
        printf("I live in Bangladesh %d\n", i);
    }

    printf("Goodbye, World!\n");
    return 0;
}

// char get_char(const char *prompt){
//     char c;
//     printf("%s", prompt);
//     scanf(" %c", &c);
//     return c;
// }
