#include<iostream>
using namespace std;
#define MAX 10
void push(int x);
void pop();
void display();
int stack[MAX];
int top=-1,i;
int main()
{
    int n;
    while(true)
    {
    cout<<"Enter choice ";
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
               break;
          default:cout<<"entered wrong choice ";
    }
    }
    return 0;
}

//Insertion

void push(int x)
{
    if(top==MAX-1)
    cout<<"Stack Overflow";
    else{
    top++;
    stack[top]=x;
    display();}
}


//Deletion

void pop()
{
    if(top<0)
    cout<<"Stack underflow ";
    else{
          cout<<stack[top];
    top--;
    display();}
}


//Displaying stack

void display(){
    if(top<0)
    cout<<"Stack Empty";
    else{
    for(i=0;i<=top;i++)
    {
        cout<<stack[i]<<" ";
    }}
    cout<<endl;
}
