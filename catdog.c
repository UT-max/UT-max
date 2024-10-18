#include <stdio.h>

int main()
{
    int A, B;
    
    printf("How many cats?:");
    scanf("%d", &A);
    
    do{
        printf("How many dogs?:");
        scanf("%d", &B);
    
    }while (A == B);
    
    int sum = A + B;
    
    printf("total:%d\n", sum);
    
    
    return 0;

}