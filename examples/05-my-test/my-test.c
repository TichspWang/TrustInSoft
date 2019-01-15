#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] = {0, 1, 2, 3, 4};
    int y[5] = {1, 2, 3, 4, 5};
    int* px = x;
    int* py = y;
    printf("%d", *x);
    free(py);
    printf("%d", y[0]);
    return 0;
}
