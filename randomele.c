// random element
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,min,max;
    printf("\n Enter minimum value: ");
    scanf("%d",&min);
    printf("\n Enter maximum value: ");
    scanf("%d",&max);
    for(i=min;i<max;i++)
        printf("\t %d",rand()%(max-min+1)+min);
}