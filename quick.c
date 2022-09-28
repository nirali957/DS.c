#include <stdio.h>
#include<stdlib.h>
int n;
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int last,int first)
{
    int pivot = A[last];
    int i = last + 1;
    int j = first;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[last] and A[j]
    temp = A[last];
    A[last] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int last, int first)
{
    int partitionIndex; // Index of pivot after partition

    if (last < first)
    {
        partitionIndex = partition(A, last, first); 
        quickSort(A, last, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, first); // sort right subarray
    }
}

int main()
{
    // int A[] = {1,2,3,4,5,6,7};
    
    // int n = 9;
    // n =7;
    // printArray(A, n);
    // quickSort(A, 0, n - 1);
    // printArray(A, n);
    // return 0;


    int i,A[25],min=20,max=101,n;
    printf("how many element ? : ");
    scanf("%d",&n);
    // printf("Enter %d element : ",n);

    for(i=0;i<n;i++)
        A[i]=(rand()%(max-min+1))+min;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
    printf("\n Order of sorted Elements : ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",A[i]);

    }
    // printArray(A, n);
    // quickSort(A, 0, n - 1);
    // printArray(A, n);
    return 0;
    
}