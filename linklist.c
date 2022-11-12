#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*tail=NULL;
void addnode(int data)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
{
  head=newnode;
  tail=newnode;
}
else
{
  tail->next=newnode;
  tail=newnode;
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
  printf("Nodes of singly linked list:\n");
  while(current!=NULL)
  {
    printf("%d  ",current->data);
    current=current->next;   
  }
  printf("\n");
}
int main()
{
 addnode(1);
 addnode(2);
 addnode(3);
 addnode(4);
 display();
 return 0;
}











