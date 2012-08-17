#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    const long long int num = 600851475143, lim = sqrt(num) + 1;
    long long i, j, k, lim2;
    int bad;

    /* Find all num's divisors which are not a 2 multiple */
    for(i = 3; i < lim; i += 2)
    {
        /* If num is divisible by i */
        if (num % i == 0)
        {
            lim2 = sqrt(i) + 1;
            bad = 0;
            /* Check if i is a prime number */
            for(j = 3; j < lim2; j += 2)
            {
                if (i % j == 0)
                {
                    bad = 1;
                    break;
                }
            }
            
            /* If i is a prime number, set k to i */
            if (!bad)
                k = i;
        }
    }

    printf("%lld\n", k);

    return EXIT_SUCCESS;
}
