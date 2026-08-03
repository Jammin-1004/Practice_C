#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    if(n < 0){
        printf("ice\n");
    }
    else if ( n >= 100 ){
        printf("vapor\n");
    }
    else{
        printf("water\n");
    }

    return 0;
}