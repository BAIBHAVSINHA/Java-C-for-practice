Q.Delete middle element in stack?
    Sol:->
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void insert_node(struct Node**,int);
void show_data(struct Node*);
void remove_node();
void remove_mid_element(struct Node*);
void insert_node(struct Node**root,int value)
{
    struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node)
    {
        new_node->data=value;
        new_node->next=NULL;
        if(*root==NULL)
        {
            *root=new_node;
        }
        else
        {
            struct Node*temp=NULL;
            temp=*root;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    else
    {
        printf("\n Memory overflow please try again..!");
    }
}
void show_data(struct Node*temp)
{
    if(temp==NULL)
    {
         /*linked list are empty*/
    }
    else
    {
        while(temp)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
    }
}
void remove_mid_element(struct Node*temp)
{
    if(temp==NULL)
      {
         printf("\n No element in this linked list ");
      }
    else if(temp->next)
    {
        struct Node*find_element=temp,*help=NULL;
        while(temp&&temp->next&&temp->next->next)
        {
            help=find_element;
            find_element=find_element->next;
            temp=temp->next->next;
        }
        if(help)
        {
           help->next=help->next->next;
           find_element->next=NULL;
           free(find_element);
           find_element=NULL;
        }
    else
        {
            printf("\n Less then 3 node of linked list please try again.!\n");
        }
    }
    else
       {
            printf("\n Only one element in this linked list try again\n");
       }
}
void remove_node(struct Node**root)
{
  if(*root)
    {
        struct Node*temp=*root;
        while(temp)
        {
            *root=temp->next;
            temp->next=NULL;
            free(temp);
            temp=*root;
        }
        printf("\n\n Free linked list Node element \n");
    }
    else
    {
          printf("\n linked list is empty \n");
    }
}
int main()
{
    struct Node*root=NULL;
        insert_node(&root,51);
        insert_node(&root,63);
        insert_node(&root,21);
        insert_node(&root,52);
        insert_node(&root,51);
        insert_node(&root,51);
        insert_node(&root,23);
​        printf("Case Odd Nodes");
        printf("\nBefore remove : \n");
        show_data(root);
        printf("\n\nAfter remove :\n ");
        remove_mid_element(root);
        show_data(root);
        printf("\n---------> Case Even Nodes <---------\n");
        printf("\nBefore remove : \n");
        show_data(root);
        printf("\n\nAfter remove :\n ");
        remove_mid_element(root);
        show_data(root);
        remove_node(&root);
    return 0;
}
