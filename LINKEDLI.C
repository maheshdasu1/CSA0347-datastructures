#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
struct node
{int data;
struct node*next;
};
struct node *head,*middle,*last;
struct node *temp = head;
clrscr();
head=malloc(sizeof(struct node));
middle=malloc(sizeof(struct node));
last=malloc(sizeof(struct node));
head->data=10;
middle->data=20;
last->data=30;

head->next=middle;
middle->next=last;
last->next=null;
temp=head;
while(temp!=null)
{
printf("%d", temp->data);
temp=temp->next;
}
printf("null");
getch();
return 0;
}
