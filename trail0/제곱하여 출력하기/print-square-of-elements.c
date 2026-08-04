#include <stdio.h>

int main() {
    
    int N;
    scanf("%d\n", &N);
    
    int a[N-1];
    for ( int j = 0 ; j < N ; j++){
      scanf("%d ", &a[j]);   
    }

    for ( int i = 0 ; i < N ; i++)
    {
        printf("%d ", a[i]*a[i]);
    }

    return 0;
}