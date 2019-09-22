#include <stdio.h>
#include "alge.h"

void alge_init()
{
    int i = 5;
    int j, k;
    float ff = 0.0;
    if ( i < 4 )
    {
        for ( j = 1; j <= 50; j++ )
        {
            ff -= j;
        }
    }
    else
    {
        for ( k = 1; k <= 50; k++ )
        {
            ff += k;
        }
    }
    
	printf("alge module init ... \n");
    printf("1 + 2 + 3 + ... + 50 = %f \n", ff);
}
