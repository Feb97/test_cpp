#include <iostream>

int main()
{
    int c = 0;
    int* x = NULL;
    x = (int*) malloc(10 * sizeof(int));

    if (x) 
        free(x);
}
