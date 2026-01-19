#include <stdio.h>
#include <string.h>

void print_column(int col);

int main(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height <= 0 || height > 8);

    // print mario

    for (int i = 0; i < height; i++)
    {
        // print left space
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        print_column(i);

        // middle space
        // printf(" ");
    }

    return 0;
}

void print_column(int col)
{
    // left col

    for (int j = 0; j <= col; j++)
    {
        printf("#");
    }


    // middle space
    printf(" ");

    // right column
    for (int j = 0; j <= col; j++)
    {
        printf("#");
    }

    printf("\n");
}
