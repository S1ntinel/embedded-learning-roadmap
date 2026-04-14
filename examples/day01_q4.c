#include <stdio.h>

int main()
{
    int mode = 0;
    for (int i = 0; i < 6; i++)
    {
        if (mode < 2)
        mode = mode + 1;
       else  (mode >2)
        mode = 0;
        printf(" %d\n", mode);
    }
    return 0;
}