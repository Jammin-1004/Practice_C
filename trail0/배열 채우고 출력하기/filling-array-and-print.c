#include <stdio.h>

int main() {
    
    char a[9];
    scanf("%c %c %c %c %c %c %c %c %c %c", &a[9], &a[8], &a[7], &a[6],
    &a[5], &a[4], &a[3], &a[2], &a[1], &a[0]);

    for(int i =0; i <= 9 ; i++){
        printf("%c", a[i]);
    }

    return 0;
}