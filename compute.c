#include <stdio.h>
#include "davaleba8.h"
#include "limits.h"

void compute()
{
     printf("Min range of signed int %d\n", -(int)((unsigned int)~0 >> 1) -1);
     printf("Min range of signed int %d\n", (int)((unsigned int)~0 >> 1));
}