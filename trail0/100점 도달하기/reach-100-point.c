#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);

    for (int i = N; i <= 100 ; i ++ )
    {
        if ( i >= 90 ){
            printf("A ");
        }
        
        if ( i < 90 && i >= 80 ) {
            printf("B ");
        }

        if ( i < 80 && i >= 70 ){
            printf("C ");
        }

        if ( i < 70 && i >= 60 ){
            printf("D ");
        }

        if ( i < 60 ){
            printf("F ");
        }
    }
    return 0;
}