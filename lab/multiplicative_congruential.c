#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, m, X0, n;
    printf("Enter the number of random numbers: ");
    scanf("%d", &n);
    printf("\nEnter the value of a, m, X0: ");
    scanf("%d %d %d", &a, &m, &X0);
    int random_integer[n];
    float random_decimal[n];
    random_integer[0] = X0;
    random_decimal[0] = (float)X0/m ;

    for(int i = 1; i < n; i++){
        random_integer[i] = (a * random_integer[i-1]) % m;
        random_decimal[i] = (float)random_integer[i] / m;
    }
    printf("The sequence of random integers are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", random_integer[i]);
    }
    printf("\nThe sequence of random decimals are: ");
    for(int i = 0; i < n; i++){
        printf("%f ", random_decimal[i]);
    }
    printf("\n");
    return 0;
}