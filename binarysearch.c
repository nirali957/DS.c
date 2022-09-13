#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1,stack[5],i,s,mid,l,u,b,j;
void Push(int val)
{
    if(top>n-1)
        printf("\n Overflow");
    else
        stack[++top]=val;
}
int Pop()
{
    int x;
    if(top<=-1)
        printf("\n Underflow");
    else
        x=stack[top--];
        printf("\n Poped element is %d",x);
}
int Peep() //Binary search
{
    for(i=0;i<n;i++)
    {
        if(s==stack[i])
            printf("\n Your Element is %d",i+1);
        else 
            printf("\n Element not found",s);
            // return 0;
    }
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("\n%d",stack[i]);
    }
}
int main()
{
    int ch ,val;
    printf("\n press --> 1 for PUSH \n press --> 2 for POP \n press --> 3 for Show \n press --> 4 for Peep \n press --> 0 for EXIT.");
    do
    {
        printf("\n Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:                // top>n     // overflow
                printf("\n Enter Value:");
                scanf("%d",&val);
                Push(val);
                break;
            case 2:      // top<=-1    // underflow
                Pop();     
                break;
            case 3:
                print();
                break;
            case 4:
                printf("\n Enter element which you want to search:");
                scanf("\n%d",&s);
                Peep();
                break;
            case 0:
                printf("\n Exit");
                exit(0);
                break;
            default:
                printf("\n Wrong Choice");
                break;
        }
    }while (ch!=0);
    
}
