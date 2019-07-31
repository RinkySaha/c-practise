#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,sum=0,div,i;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        div=n%10;
        n=n/10;
        sum=sum+div;
    }
    printf("%d",sum);

    return 0;
}


