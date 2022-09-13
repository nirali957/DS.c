#include<stdio.h>
#include<stdlib.h>
int n ,i ,j,pivot,temp;
void print(int a[])
{
    int i;
    for(int i=0;i<n;i++)
        printf(" %d",a[i]);
}
void swap(int temp,int a[])
{
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
}
void quicksort(int a[],int first,int last)
{
  
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            printf("\n Inside quick: ");
            print(a);
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                // temp=a[i];
                // a[i]=a[j];
                // a[j]=temp;
                swap(temp,a);

                
            }

        }
        swap(temp,a);
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int i,a[25],min=20,max=101;
    printf(" How many elements ? : ");
    scanf("%d",&n);
    printf("Enter %d elements",n);
        for(i=0;i<n;i++)
            a[i]=(rand()%(max-min+1))+min;
        print(a);
        quicksort(a,0,n-1);
        printf("\n Order of sorted elements: ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
            //print(number);
     return 0;
}
 /*How many elements ? : 14
 Enter 14 elements 61 37 40 34 83 82 100 22 86 48 67 39 95 37
 Inside quick:  61 37 40 34 83 82 100 22 86 48 67 39 95 37
 Inside quick:  22 37 40 34 37 39 48 61 86 100 67 82 95 83
 Inside quick:  22 37 40 34 37 39 48 61 86 100 67 82 95 83
 Inside quick:  22 34 37 37 40 39 48 61 86 100 67 82 95 83
 Inside quick:  22 34 37 37 40 39 48 61 86 100 67 82 95 83
 Inside quick:  22 34 37 37 39 40 48 61 86 100 67 82 95 83
 Inside quick:  22 34 37 37 39 40 48 61 82 83 67 86 95 100
 Inside quick:  22 34 37 37 39 40 48 61 67 82 83 86 95 100
 Order of sorted elements: 22 34 37 37 39 40 48 61 67 82 83 86 95 100 
 
 
 
 
 
 How many elements ? : 10
 Enter 10 elements 61 37 40 34 83 82 100 22 86 48
 Inside quick:  61 37 40 34 83 82 100 22 86 48
 Inside quick:  22 37 40 34 48 61 100 82 86 83
 Inside quick:  22 37 40 34 48 61 100 82 86 83
 Inside quick:  22 34 37 40 48 61 100 82 86 83
 Inside quick:  22 34 37 40 48 61 100 82 86 83
 Inside quick:  22 34 37 40 48 61 83 82 86 100
 Order of sorted elements: 22 34 37 40 48 61 82 83 86 100   */