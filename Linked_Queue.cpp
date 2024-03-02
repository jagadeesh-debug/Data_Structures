#include<iostream>
using namespace std;
#define Max 10
int queue[Max],i,front=-1,rear=-1;
void Enqueue(int x);
void Dequeue();
void display();
int main()
{
    int n;
    while(1){
    cout<<"Enter your choice ";
    cin>>n;
    switch(n)
    {
        case 1:int x;
        cout<<"Enter data you want to insert ";
        cin>>x;
        Enqueue(x);
        break;
        case 2:Dequeue();
        break;
        case 3:display();
    }}
    return 0;
}
void Enqueue(int x)
{
    if(rear==Max-1)
    cout<<"Queue is full";
    else
    {  if(front==-1)
        front=0;
        rear++;
        queue[rear]=x;
    }
    display();
}

//deletion
void Dequeue(){
    if(rear==-1 && front==-1)
    cout<<"queue is underflow ";
    else if(front==rear)
    {
      cout<<"popped element is"<<queue[rear]<<" ";
      front=-1;
      rear=-1;
    }
    else{
        cout<<"deleted element is"<<queue[front];
        front++;
    }
    cout<<endl;
    display();
}

//display

void display()
{
if(front==-1)
{
    cout<<"queue is empty";
}
else{
i=front;
   while(i<=rear)
    {
        cout<<queue[i]<<" ";
        i++;
    }
}s
    cout<<endl;
}
