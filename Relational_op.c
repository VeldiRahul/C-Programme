#include<stdio.h>
int main()
{
    int x=10,y=20;
    printf(" Enter the x & y value ");
    scanf( " %d,%d",&x,&y);
    if(x<y)
    {
        printf(" Samllest value   ");
    }
    if(x>y)
    {
        printf("Largest value  ");
    }
    if(x==y)
    {
        printf("  Equal's to value  ");
    }
return 0;


}