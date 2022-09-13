
#include<stdio.h>
int c[10],i,j,n=10,key;

void print_array(int c[])
{
    printf("\n\n");
    for(int i=0;i<n;i++)
    printf("\tc=%d",c[i]);
}

void merge(int a[],int b[]) //merge two array
{ 
    printf("\n test :");
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
        printf("\nArrey A=%d",c[i]);
    }
        printf("\n");
    for(int i=0;i<5;i++)
    {
        c[i+5]=b[i];
        printf("\nArrey B=%d",c[i+5]);
    }
    
    //  for(i=0;i<10;i++)
    // printf("\t%d",c[i]);
   
}

void selection_sort(int arr[])
{
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                key=arr[i];
                arr[i]=arr[j];
                arr[j]=key;
            }
        }
    }
       
}
int main()
{
    int a[5]={1,4,2,7,3},b[5]={8,6,5,9,3};
    merge(a,b); //merge two array A&B
    selection_sort(c); //sorting new C array
    print_array(c);  //printing final C array
}
