
#include<stdio.h>
#include<stdlib.h>
int rear=0,front=0,que[5],max=5,value;
void Insert_rear_c_q(int value)
{
    //printf("Insert_rear_c_q");
    if((rear+1) == max)
        printf("\n Queue is full");
    else
    {
        rear=(rear+1)%max;
        que[rear]=value;
    }
   printf("\n front: %d \t rear: %d",front,rear);
}
void front_delete(int value)
{
    
    if((front+1) == max)
        printf("\n Queue is Empty....");
    else if(front==rear)
    {
        front=rear=0;
    }
    else
    {
        front=(front+1)%max;
        que[front];
    }
    printf("\n front:%d \t rear : %d",front,rear);
}
void Print_c_q()
{
    int i,j;
     if(front==0&&rear==0)
        printf("\n Queue is empty");
    if(front>rear)
    {
        for(i= front+1 ; i!=rear+1 ; i+=(front+1)%max)
            printf("\n %d",que[i]); 
        for(j=0;j<=max;j++)
            printf("\t%d",que[j]);
    }
    else
    {
        for(i=front+1;i<max;i++)
             printf("\t %d",que[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n press --> 1 for Insert,\n press --> 2 for Delete ,\n press --> 3 for Print,\n press --> 0 for Exit");
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter you Insert_rear Element : ");
            scanf("%d",&value);
            Insert_rear_c_q(value);
            break;
        case 2:
            printf("\n Deleted Element is : %d ",que[front+1]);
            front_delete(value);
            break;
        case 3:
            Print_c_q();
            break;
        case 0:
            printf("\n EXIT ALL");
            break;
        default:
            printf("\n Wrong Choice");
            break;
        }
    } while (ch!=0);
}