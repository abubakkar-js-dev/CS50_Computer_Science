#include<stdio.h>
#include<string.h>

int main(void){
    char fName[50];
    char lName[50];
    char fullName[100];
    int fullNameLength = 0;

    printf("Enter your first name: ");
    // fgets(fName, sizeof(fName), stdin);
    scanf("%49s", fName);

    printf("Enter your last name: ");
    // fgets(lName, sizeof(lName), stdin);
    scanf("%49s", lName);

    int i = 0;
    for(; fName[i] != '\0'; i++){
        fullName[i] = fName[i];
    }
    // add a space between first and last name
    fullName[i++] = ' ';

    for(int j = 0; lName[j] != '\0'; j++){
        fullName[i++] = lName[j];
    }

    // Null terminate
    fullName[i] = '\0';

    // calculate length of full name
    // fullNameLength = strlen(fullName);

    while(fullName[fullNameLength] != '\0'){
        fullNameLength++;
    }


    printf("Full Name: %s\n", fullName);
    printf("Length of Full Name: %d\n", fullNameLength);

    return 0;
}