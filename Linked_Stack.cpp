#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next=NULL;
};
struct Node *top=NULL;
struct Node *temp=NULL;
void push(int x);
void pop();
void display();
int main()
{
    int n;
    while(1)
    {
        cout<<"Enter Choice ";
        cin>>n;
        switch(n)
        {
        case 1:int x;
        cout<<"Enter data you want to insert ";
        cin>>x;
        push(x);
        break;
        case 2:pop();
         break;
         case 3:display();
        }
    }
    return 0;
}

void push(int x)
{
   struct Node* p=(struct Node*)malloc(sizeof(struct Node));
   if(top==NULL)
   {
    p->data=x;
    p->next=NULL;
    top=p;
   }
   else{
    p->data=x;
    p->next=top;
    top=p;
   }
   display();
}

//Deletion

void pop(){
    if(top==NULL)
    cout<<"Stack UnderFlow ";
    else{
    temp=top;
        cout<<"Popped Element is "<<temp->data;
        top=top->next;
        free(temp);
    }
    cout<<endl;
    display();
}

//display

void display()
{
    int i;
    temp=top;
    if(temp==NULL)
    {
        cout<<"Stack is Empty ";
    }
    else{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }
}
