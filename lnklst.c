 #include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
typedef struct node ll;
ll *l;
ll* getnode()
{
 ll *p;
 p=(ll*)malloc(sizeof(ll));
 return p;
}
 void inf(int x)
{
  ll *p;
  p=getnode();
 if(p==NULL)
{
 printf("out of memory\n");
 return;
}
else
{
 p->info=x;
 p->next=NULL;
 if(l==NULL)
 l=p;
 else
 {
  q=l;
   while(q->next!=NULL)
    q=q->next;
    q->next=p;
  }
 }
}
void ine(int x)
{
 ll *p;
  p=getnode();
 if(p==NULL)
{
 printf("out of memory\n");
 return;
}
 else
{
 p->info=x;
 p->next=NULL;
 if(l==NULL)
 p->next=l;
 l=p;
 }

 
void inatp(int x,int pos)
{
 ll *p,*temp;
 p=getnode();
 
 if(p==NULL)
{
 printf("out of memory\n");
 return;
}
else
{
 if(pos==1)
 inf(x);
else
{
 temp=l;
 p->info=x;
 p->next=NULL;
 if(pos==1)
 inf(x);
 else
{
 p->info=x;
 p->next=NULL;
 for(int i=0;i<pos-2;;i++)
 {
  if(temp!=NULL)
  temp=temp->next;
 }
if(temp==NULL)
printf("position entered is greater than total elements in list\n");
else
{
 p->next=temp->next;
 temp->next=p;
 }
 }
 }
}
int delf()
{
 ll *p;
 if(l==NULL)
printf("not possible\n");
else if(l->next==NULL)
{
 printf("%d deleted\n",l->info);
 free(l);
}
else
{
 
 p=l;
 l=p->next;
 p->next=NULL;
  printf("%d deleted\n",p->info);
 free(p);
 }
}
void dele()
{
 ll *p,*q;
if(l==NULL)
printf("not possible\n");
else if(l->next==NULL)
{
 printf("%d deleted\n",l->info);
 free(l);
}
 else
{
 
 p=l;
 while(q->next!=NULL)
 {
  q=p;
  p=p->next;
 }
q->next=NULL;
printf("%d deleted\n",p->info);
 free(p);
 }
}
void delatp(int pos)
{
 ll *p,*temp;
 if(l==NULL)
 printf("not possible\n");
 else
 {
   if(pos==1)
    delf(x);
  else
{
 
 for(int i=0;(i<=pos-2)&&(temp!=NULL);i++)
 {
  p=temp;
  if(temp!=NULL)
  temp=temp->next;
 }
 if(temp==NULL)
 printf("position entered is greater than total elements in list\n");
 else
{
  printf("%d deleted\n",temp->info);
  p->next=temp->next;
  temp->next=NULL;
   free(temp);
 }
}
}
}
void delkey(int key)
{
 if(l==NULL)
 printf("not possible\n");
 else
{
 ll *p,*q;
 q=l;
 while((q->info!=key)&&(q!=NULL))
{
 p=q;
 q=q->next;
}
if(q==NULL)
printf("not found\n");
else
{
 printf("%d deleted\n",q->info);
 p->next=q->next;
 q->next=NULL;
 free(q);
}
}
}
void display()
{
 ll *p;
 p=l;
 while(p!=NULL)
{
 printf("%d\t",p->info);
 p=p->next;
}
}
void main()
{
 int ch,x,y;
 printf("enter choice\n1.insert at front\n2.insert at end\n3.insert at pos\n4.del at front\n5.del at end\n6.del at pos\n7.del at key\n8.display\n9.exit\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1: printf("enter element to be inserted \n");
         scanf("%d",&x);
         inf(x);
         break;
 case 2: printf("enter element to be inserted \n");
         scanf("%d",&x);
         ine(x);
         break;
 case 3: printf("enter element to be inserted & pos \n");
         scanf("%d",&x,&y);
         inatp(x,y);
         break;
 case 4:delf();
        break;
 case 5:dele();
        break;
 case 6:printf("enter position\n");
        scanf("%d",&x);
        delatp(x);
        break;
 case 7:printf("enter key\n");
        scanf("%d",&x);
        delkey(x);
        break;
 case 8:display();
        break;
 case 9:exit(0);
 default: printf("wrong choice\n");
}
}






 
  

























 























