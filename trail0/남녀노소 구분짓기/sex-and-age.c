#include <stdio.h>

int main() {
    
    int gender, age;
    scanf("%d\n%d", &gender, &age);

    if ( gender == 0 ){
        if ( age >= 19 ){
            printf("MAN\n");
        }
        else {
            printf("BOY\n");
        }
    }
    else {
        if( age >= 19 ){
            printf("WOMAN\n");
        }
        else {
            printf("GIRL\n");
        }
    }

    return 0;
}