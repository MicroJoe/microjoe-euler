#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a = 1, b = 2, sum = b, lim = 4e6, res;

    for(;;)
    {
        res = a + b;

        if(res >= lim)
            break;
        else if(res % 2 == 0)
            sum += res;

        a = b;
        b = res;
    }

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}
