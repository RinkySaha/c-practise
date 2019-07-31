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
    int n,k,a=1,b,i,band=0,bor=0,bxor=0,xr,or,nd;
    scanf("%d %d",&n,&k);

    while(a<=n){
        for(b=a+1;b<=n;b++){
           nd=a&b;
           if(nd>band&&nd<k){
            band=nd;
           }
           or=a|b;
           if(or>bor&&or<k){
            bor=or;
           }
           xr=a^b;
           if(xr>bxor&&xr<k){
            bxor=xr;
           }
        }
        a++;
    }

    printf("%d\n%d\n%d\n",band,bor,bxor);


    return 0;
}


