#include<stdio.h>
#include<stdlib.h>
void merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while (i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];   
    }
    while(i<=mid)
        B[k++]=A[i++];
    while(j<=h)
        B[k++]=A[j++];
    for(i=l;i<=h;i++)
        A[i]=B[i];
    
}
void mergesort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
        printf("\n l: %d mid: %d h: %d",l,mid,h);
    }
}
int main()
{
    int A[20],min=20,max=100,val,n=15;
    for(int i=0;i<15;i++)
        A[i]=(rand()%(max-min+1))+min;
    mergesort(A,0,n-1);
    for(int i=0;i<15;i++)
        printf(" %d ",A[i]);
    printf("\n");
    return 0;
}