#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  char str[10];
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
  char str1[10];
  printf("\n Enter yes or no\n");
  scanf("%s",str1);
  if(strcmp(str1,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value and a name ");
  scanf("%d",&temp->data);
  scanf("%s",temp->str);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
int length(struct node *p)
{
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  return c;
}
struct node *reverse(struct node *p)
{
  struct node *start,*q,*t,*s,*r;
  int i=0;
  int temp;
  char str2[10];
  int j=length(p)-1;
  s=p;
  q=p;
  while(i<j)
  {
      int k=0;
    while(k<j)
    {
      q=q->next;
      k++;
    }
    temp=s->data;
    strcpy(str2,s->str);
    s->data=q->data;
    strcpy(s->str,q->str);
    q->data=temp;
    strcpy(q->str,str2);
    i++;
    j--;
    s=s->next;
    q=p;
  }
  return p ;
}
struct node *display(struct node *q)
{
  while(q!=NULL)
  {
    printf("%d %s\n",q->data,q->str);
    q=q->next;
  }
}
int main()
{
  struct node *p,*temp,*start=NULL,*t,*q;
  p=create();
  t=reverse(p);
  q=display(t);
}
