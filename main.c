#include <stdio.h>
void border(int len){
    int row;
    for (row = 0; row < 5 * len; row++){
        if (row > 2 * len && row-1 < 3 * len)
            printf(" ");
        if (row < 2 * len || row >= (3 * len))
            printf("*");

    }
    printf("\n");
}
int main( )
{
    int line, len, row;
    printf("Enter: ");
    scanf("%d", &len);
    border(len);
    for (line = 0; line< len; line++) {
        for (row = 0; row< 5*len; row++){
            if (row == 0 || row == 2*len || row-1 == 3*len || row+1 == 5*len)
                printf("*");
            if (row > 2 * len && row <= 3 * len) {
                if (line == len / 2)
                    printf("|");
                else
                    printf(" ");
            }
            if ((row > 3 * len && row + 1 < 5 * len) || (row > 1 && row < 2 * len))
                printf("/");
        }
        printf("\n");
    }
    border(len);
    return 0;
}
