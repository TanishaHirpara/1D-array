#include<stdio.h>

main()

{
    int a[]	= { 1,2,3,4 };
    int length;
    length = sizeof(a)/sizeof(a[0]);
    printf("The length of array is = %d" ,length);
    
}