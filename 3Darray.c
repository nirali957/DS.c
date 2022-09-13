#include<stdio.h>
int main()
{
   int i,j,k,a[3][3][3];
   for(i=0;i<3;i++)
   {
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("\n Enter a[%d][%d][%d]: ",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	
   }
   printf("\n");
   for(i=0;i<3;i++)
   {
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
	printf("\n");
   }

}
	/*
 Enter a[0] [0] [0]: 1

 Enter a[0] [0] [1]: 2

 Enter a[0] [0] [2]: 3

 Enter a[0] [1] [0]: 4

 Enter a[0] [1] [1]: 5

 Enter a[0] [1] [2]: 6

 Enter a[0] [2] [0]: 7

 Enter a[0] [2] [1]: 8

 Enter a[0] [2] [2]: 9

 Enter a[1] [0] [0]: 10

 Enter a[1] [0] [1]: 11

 Enter a[1] [0] [2]: 12

 Enter a[1] [1] [0]: 13

 Enter a[1] [1] [1]: 14

 Enter a[1] [1] [2]: 15

 Enter a[1] [2] [0]: 16

 Enter a[1] [2] [1]: 17

 Enter a[1] [2] [2]: 18

 Enter a[2] [0] [0]: 19

 Enter a[2] [0] [1]: 20

 Enter a[2] [0] [2]: 21

 Enter a[2] [1] [0]: 22

 Enter a[2] [1] [1]: 23

 Enter a[2] [1] [2]: 24

 Enter a[2] [2] [0]: 25

 Enter a[2] [2] [1]: 26

 Enter a[2] [2] [2]: 27
        1       2       3
        4       5       6
        7       8       9

        10      11      12
        13      14      15
        16      17      18

        19      20      21
        22      23      24
        25      26      27*/
