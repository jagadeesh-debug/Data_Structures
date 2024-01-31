#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *l,*r;
};
struct node *head=NULL,*p=NULL,*temp=NULL,*j,*q=NULL;;
void creation()
{
  int n,i;
  cout<<"enter size of list";
  cin>>n;
  for(i=0;i<n;i++)
  {
      p=(struct node *)malloc(sizeof(struct node));
      cin>>p->data;
      p->l=NULL;
      p->r=NULL;
      if(head==NULL)
      {
          head=p;
      }
      else
      {
          temp=head;
        
          while(temp->r!=NULL)
          {  
              temp=temp->r;
          }
         temp->r=p;
         p->l=temp;
          
      }
  }
}
 void display()
  {
      for(j=head;j!=NULL;j=j->r)
      {
          cout<<j->data<<endl;
      }
  }
  void insert()
  {
     
      q=(struct node *)malloc(sizeof(struct node));
      cout<<"enter new node data";
      cin>>q->data;
      q->l=NULL;
      q->r=NULL;
      int o;
      cout<<"enter option";
      cin>>o;
      switch(o)
      {
          case 01:
          head->l=q;
          q->r=head;
          head=q;
          break;
          
          case 02:
          temp=head;
          while(temp->r!=NULL)
          {  
              temp=temp->r;
          }
          temp->r=q;
          q->l=temp;
          break;
          
          case 3:
          int p,i=1;
          cout<<"enter insert position ";
          cin>>p;
          temp=head;
          while(i<=p)
          {
              j=temp;
              temp=temp->r;
              i++;
          }
          q->r=temp;
          q->l=j;
          j->r=q;
          temp->l=q;
          break;
      }
      cout<<"elements after insertion"<<endl;
   display();

  }
  void deletion()
  {
      int op;
      cout<<"enter delete option ";
      cin>>op;
      switch(op)
      {
          case 1:
          temp=head;
          head=head->r;
          cout<<temp->data<<" is deleted"<<endl;
          free(temp);
          break;
          
          case 2:
          temp=head;
          while(temp->r!=NULL)
          {
              j=temp;
              temp=temp->r;
          }
          j->r=NULL;
          cout<<temp->data<<" is deleted"<<endl;
          free(temp);
          break;
          
          case 3:
          cout<<"enter delete position ";
          int pos,i=1;
          cin>>pos;
          temp=head;
          while(i<pos)
          {
              j=temp;
              temp=temp->r;
              i++;
          }
          j->r=temp->r;
          (temp->r)->l=j;
          cout<<temp->data<<" is deleted"<<endl;
          free(temp);
          
          
      }
      display();
  }
int main()
{
    creation();
   // display();
   // insert();
    deletion();
}