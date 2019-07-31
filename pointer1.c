#include<stdio.h>


int main(void){
    int *p;
    double q, temp;

    temp = 1276.54762;

    p = &temp;

    q = *p;

    printf("%f",q);
    return 0;
}
