#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *array1[4]; // use const because we're pointing to literals
    int i;

    for(i=0;i<4;i++){
        sscanf(line, "%s", array1);
    }
    printf("%s %s %s %s\n", array1[0], array1[1], array1[2], array1[3]);
}
