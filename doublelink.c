//Assignment 4, set B, Q:1
#include<stdio.h>
struct node
{
int data;
struct node *previous;
struct node *next;
};
struct node *head,*tail=NULL;
void addnode(int data)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
if(head==NULL)
  {
   head=tail=newnode;
   head->previous=NULL;
   tail->next=NULL;
  }
else
  {
   tail->next=newnode;
   newnode->previous=tail;
   tail=newnode;
   tail->next=NULL;
  }
}
void display()
{
 struct node *current=head;
 if(head==NULL)
  {
    printf("List is empty\n");
    return;
  }
  printf("Nodes of doubly linked list:\n");
  while(current!=NULL)
   {
     printf("%d ",current->data);
     current=current->next;
   }
}
int main()
{
 addnode(1);
 addnode(2);
 addnode(3);
 addnode(4);
 addnode(5);
 display();
 return 0;
}


















