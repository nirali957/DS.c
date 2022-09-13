//Double_Ended_Queue_2...
#include<stdio.h>
#include<stdlib.h>
int Front=-1,Rear=-1,que[5],i,value,max=5,min=0,front_value;
void insert_Rear()        
{
    if(Rear+1==max)
        printf("\n Queue is full");
    else
        if(Front==-1&&Rear==-1)  
            que[++Rear]=value;
        else
            que[++Rear]=value;
}
void insert_front()   
{
    if(Rear-1==max)
        printf("\n Queue is full");
    else
        que[Front--]=front_value;
}
void delete_Rear()           
{
        if(Front==-1&&Rear==-1)
            printf("\n\n Not possible to delete Element ");
        else   
            if(Front==Rear)
                Front=Rear=-1;
            else
                --Rear;
}
void delete_Front()     
{
    if(Front==-1&&Rear==-1)
        printf("\n\n Not possible to delete Element ");
    else 
        if(Front==Rear)
            Front=Rear=-1;
        else
            ++Front;
}

void print()
{   
    int  index_no=0;
    if(Front==-1&&Rear==-1)
        printf("\n Queue is empty");
    else
        for(i=Front+1;i<=Rear;i++,index_no++)
        {
            printf("\t %d ",que[i]);
        }
}
int main()
{
    int ch,index_no=5;  
    do
    {
        printf("\n press --> 1 for Insert_Rear \n press --> 2 for Delete_Rear \n press --> 3 for Insert_Front \n press --> 4 for Delete_Front \n press --> 9 for Show \n press --> 0 for EXIT.");
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter your ELEMENT for insert_rear : ");
                scanf("%d",&value);
                printf("\n Inserted rear element is : %d\n",value);
                for(int x=min;x<=index_no;x++)     
                    que[index_no]=Rear+1;
                    printf("\n insert_rear index position is %d",que[index_no]);
                insert_Rear();
                break;
            case 2:
                printf("\n deleted_rear Queue element is %d ",que[Rear]);  
                for(int x=min;x<=index_no;x++)     
                    que[index_no]=Rear;
                    printf("\n delete_rear index position is %d",que[index_no]);
                delete_Rear();
                break;
            case 3:
                printf("\n Enter your ELEMENT for insert_front : ");
                scanf("%d",&front_value);
                printf("\n Inserted front element is : %d\n",front_value);
                for(int y=index_no;y>=min;y--)     
                    que[index_no]=Front;
                    printf("\n insert_front index position is %d",que[index_no]);
                insert_front();
                break;
            case 4:
                printf("\n deleted_front Queue element is %d ",que[Front+1]);
                for(int y=index_no;y>=min;y--)     
                    que[index_no]=Front+1;
                    printf("\n delete_front index position is %d",que[index_no]);       
                delete_Front();
                break;
            case 9:
                print();
                break;
            case 0:
                printf("\n EXIT All");
                break;
            default:
                printf("\n WRONG CHOICE");
                break;
        }
    }while (ch!=0);  
}