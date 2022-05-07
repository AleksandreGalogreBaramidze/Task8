#include "davaleba8.h"
#include <stdio.h> 
#include "limits.h"


void makros()
{
     long long v,c;
    v = INT_MAX;
    printf("\nMax range of singed int %d\n" ,INT_MAX);
    printf("\nMin range of signed int%d\n" ,INT_MIN);
    
    c = (v*2) + 1;
    printf("\n%lld\n" ,c);
}
