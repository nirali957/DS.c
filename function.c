#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    void test(int[]);
    test(a);
    printf("\n main :");
    for(int i=0;i<5;i++)
        printf("%4d",a[i]);
}
void test(int A[])
{
    printf("\n test:");
    for(int i=0;i<5;i++)
    {
        A[i]*=A[i];
        printf("%4d",A[i]);
    }
}
/*#include<stdio.h>
int main()
{
    int a=10;
    void test(int a);
    test(a);
    printf("\n main :");
   // for(int i=0;i<5;i++)
        printf("%4d",a);
}
void test(int A)
{
    printf("\n test:");
   // for(int i=0;i<5;i++)
    {
        A*=A;
        printf("%4d",A);
    }
}*/