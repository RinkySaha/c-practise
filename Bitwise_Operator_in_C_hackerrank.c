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
    int n,m,i,j;

    scanf("%d",&n);
    m=n;
    for(i=2*n-1;i>=1;i--){
        for(j=2*n-1;j>=1;j--){
            printf("%d",m);
        }
        printf("\n");
        if(i<=n){
            m++;
        }
        else{
            m--;
        }
    }


    return 0;
}


