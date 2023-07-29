#include <stdio.h>

void main(void)
{
    int j = 12;
    int k = 2;

    j, k = k, j;
    printf("k=%d, j=%d", k, j);
}