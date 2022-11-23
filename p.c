

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    
};
struct node *addatbeg(struct node * head)
{
    struct node *ptr=malloc(sizeof(struct node ));
    ptr->data=60;
    ptr->link=head;
    head=ptr;
    return head;
}
struct node  *addatend(struct node *head)
{
    struct node *temp=head;
    struct node *ptr1=malloc(sizeof(struct node));
    ptr1->data=80;
    ptr1->link=NULL;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr1;
    return head;
}
struct node *addatspec(struct node*head);
{
    struct node*ptr2=malloc(sizeof(struct node));
    ptr2->data=100;
    ptr2->link=NULL;
    pos--;
    while(pos!=NULL)
    {
        
    }
}

int main()
{
struct node *head=NULL;
struct node *p;
struct node*k=malloc(sizeof(struct node ));
k->data=10;
head=k;

struct node*k1=malloc(sizeof(struct node ));
k1->data=20;
k->link=k1;

struct node*k2=malloc(sizeof(struct node ));
k2->data=30;
k1->link=k2;

struct node*k3=malloc(sizeof(struct node ));
k3->data=40;
k2->link=k3;

struct node*k4=malloc(sizeof(struct node ));
k4->data=50;
k3->link=k4;
k4->link=NULL;

p=head;
printf("original node:");
while(p!=NULL)
{
    printf("creating of nodes:%d\n",p->data);
    p=p->link;
}



p=head;
head=addatbeg(head);
printf("add at beg \n:");
while(p!=NULL)
{
    printf("creating of nodes:%d\n",p->data);
    p=p->link;
}
p=head;
head=addatend(head);
printf("add at end:\n");
while(p!=NULL)
{
    printf("creating of nodes:%d\n",p->data);
    p=p->link;
}
}

