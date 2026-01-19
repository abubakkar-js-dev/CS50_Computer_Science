#include<stdio.h>
#include<string.h>

int main(void){
    char message[100] = "";
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // reverse the string
    int stringLength = strlen(message) - 1; 
    char reversed[100];

    printf("String Length: %i\n", stringLength);

    // Print original
    for(int i = 0; i < stringLength; i++){
        printf("%c", message[i]);
    }
    printf("\n");

    // Print reversed and store in array
    int j = 0;
    for(int i = stringLength - 1; i >= 0; i--){
        reversed[j++] = message[i];
        printf("%c", message[i]);
    }
    reversed[j] = '\0'; 
    printf("\n");

    printf("Your message is: %s\n", reversed); 

    return 0;
}