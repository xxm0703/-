#include <stdio.h>

int main() {
    int row = 0, len;
    int line = row;
    scanf("%d", &len);
    for (row = 0; row < len; row++){
        for (line = 0; line < len - row; line++){
            printf(" ");
        }
        for (line = 0; line < row; line++){
            printf("*");
        }
        printf("|");
        for (line = 0; line < row; line++){
            printf("*");
        }
        for (line = 0; line < len - row; line++) {
            printf(" ");
        }
    printf("\n");
    }

    return 0;
}