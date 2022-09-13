
#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,max=5,q[5],i,e;
void insert(int val)
{
    if(rear+1==max)
    printf("\n Queue is already full");
    else if(front==-1&&rear==-1)
    {
        q[++rear]=val;
        //rear++;
    } 
    else
    q[++rear]=val;
}
void delete()
{
    if(front==-1&&rear==-1)
    {
        printf("\n  Queue is Empty ");
    }
    else if(front==rear)
        front=rear=-1;
    else
        ++front;
}
void print()
{
    if(front==-1&&rear==-1)
        printf("\n Queue is Empty");
    else
        {
            for(i=front+1;i<=rear;i++)
            printf("%d ",q[i]);
        
        }
}
int main()
{
        int ch,val;
        printf("\n press --> 1 for Insert \n press --> 2 for delete \n press --> 3 for Print \n press --> 0 for Exit");
        do
        {
            printf("\n Enter choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("\n Insert the Element : ");
                    scanf("%d ",&val);
                    insert(val);
                    break;
                case 2:
                    printf("\n Deleted Element is %d",q[front+1]);
                    delete();
                    break;
                case 3:
                    print();
                    break;
                case 0:
                    exit(0);
                    break;
                default:
                    printf("\n Wrong choice");
                    break;
            }

        }while (ch!=0);
}