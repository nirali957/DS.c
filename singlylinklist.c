#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}; 
void head_count(struct node *head)
{
    int cnt=0;
//    int x;
    if (head==NULL)
        printf("\n List is Empty");       
    struct node *ptr=NULL;
//    struct node *nnode;
    ptr=head;
    while(ptr!=NULL)
    {
//    	x=ptr->data->nnode;
        printf("\n %d ",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n count : %d",cnt);
}
// insert first 
void insert_first(struct node **head,int n_data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->next=*head;
    temp->data=n_data;
    *head = temp;
    // printf("\nptr  %d ",temp->data);
}

// insert last
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr = *head_ref;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=new_data;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
}

// delete first
void delete_first(struct node **head)
{
    struct node *ptr = *head;
    *head=ptr->next;
    free(ptr);  //// ptr = NULL;
}

// delete last
void delete_last(struct node **head_last)
{
    struct node *ptr = *head_last;
    if (*head_last==NULL)
    {
        printf("\n List is Empty"); 
        return;
    }  
    if(ptr->next==NULL)
    {
        free(ptr);
        return;   // *head = null;
    }
    while( ptr->next->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=NULL;
}
void middle_insert(struct node **head_m_i,  int index_value, int nnode_data)
{
    // nnode_data = new node data

    struct node *ptr = *head_m_i;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *nnode = temp; //= *head_m_i;

    while(ptr->data!=index_value)
    {
        ptr=ptr->next;
        // ptr->next = nnode;
        // nnode=ptr->next;
    }
    temp=ptr->next;  // two value cut and not insert
    ptr->next = nnode;
    nnode->next = temp;
    return;
}
void middle_delete(struct node **head_middle_D, int delete_index)
{
     struct node *ptr = *head_middle_D;
     if (head_middle_D==NULL)
         printf("\n List is Empty");  
     ptr->next->next = *head_middle_D;
     ptr->next=NULL;
     free(ptr);

}
int main()
{
    struct node *head = NULL;
    int ch,n_data,new_data,head_last,index_value,nnode,nnode_data,delete_index;
    do
    {
        printf("\n\n press --> 1 for Insert_First"); 
        printf("\n press --> 2 for Insert_last");
        printf("\n press --> 3 for Delete_first");
        printf("\n press --> 4 for Delete_Last");
        printf("\n press --> 5 for meddel_insert");
        printf("\n press --> 6 for meddel_delete");
        printf("\n press --> 11 for show");
        printf("\n press --> 0 for EXIT.");
        printf("\n\n Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:              
                printf("\n Enter head value : ");
                scanf("%d",&n_data);
                insert_first(&head, n_data);
                break;
            case 2:             
                printf("\n Enter last value : ");
                scanf("%d",&new_data);
                insert_end(&head, new_data);       
                break;
            case 3:
                // printf("\n first  %d  element is deleted. ",*head);
                delete_first(&head);
                break;
            case 4:
                delete_last(&head);
                break;
            case 5:
                printf("\n give your index :");
                scanf("%d",&index_value);
                printf("\n Enter your new node value : ");
                scanf("%d",&nnode_data);
                middle_insert(&head,index_value,nnode_data);
//                head_count(head);
                break;
            case 6:
                printf("\n give your index for delete :");
                scanf("%d",&delete_index);
                middle_delete(&head,delete_index);
           		break;
            case 11:
                head_count(head);
                break; 
            case 0:
                printf("\n EXIT ALL");
                exit(0);       
                break;
            default:
                printf("\n WRONG CHOICE");
                break;
        }
    }while (ch!=0);
}