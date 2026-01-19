#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Please inter your first name and last name as command line arguments.\n");
        return 1;
    }
    for(int i = 1; i < argc; i++){
        printf("Argument %i: %s\n", i, argv[i]);
    }
    
}