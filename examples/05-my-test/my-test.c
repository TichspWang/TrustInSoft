#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] = {0, 1, 2, 3, 4};
    int y[5] = {1, 2, 3, 4, 5};
    int* px = x;
    int* py = y;
    py = malloc(sizeof(int));
    *py = 32;
    printf("%d", *py);
    free(py);
    printf("%d", *py);
    return 0;
}
