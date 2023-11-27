#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL, *temp = NULL, *p, *j, *q = NULL;
void display();
void remove();
void creation()
{
    int n;
    cout << "Enter size of List ";
    cin >> n;
    int i;
    cout << "enter data in List ";
    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        cin >> p->data;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = p;
            p->next = NULL;
        }
    }
}
// inserting elements at required positons
void insertion(int n)
{
    int op;
    cout << "Enter position where you want to insert";
    cin >> op;
    q = (struct node *)malloc(sizeof(struct node));
    switch (op)
    {
    case 1:
        cout << "You choosed to insert at begining of list ";
        q->data = n;
        q->next = head;
        head = q;
        break;
    case 2:
        cout << "You choosed to insert at End of list ";
        q->data = n;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = q;
        q->next = NULL;
        break;
    case 3:
        int pos;
        cout << "ok you want to insert at specif position so where you want to insert";
        cin >> pos;
        q->data = n;
        int i = 1;
        temp = head;
        while (i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        q->next = temp->next;
        temp->next=q;

        break;
    }
    display();
}
//deleting elements 
void remove(){
    int l;
    cout<<"enter your choice where it deleted ";
    cin>>l;
    struct node *t1=NULL;
    switch(l)
    {
        case 1:
        cout<<"you are going to deleted the first element ";
        temp=head;
        head=head->next;
        free(temp);
        break;
        case 2:
        cout<<"you are goint to delete the last element  ";
        temp=head;
        while(temp->next!=NULL)
        {    t1=temp;
            temp=temp->next;
        } 
        if(temp==head)
        {
            head=NULL;
        }else{
         t1->next=NULL;
    }
        free(temp);
        break;


        //deleting at specific position
        case 3:
        int n;
        cout<<"Enter positon where you want to delete ";
        cin>>n;
        int i=1;
        temp=head;
        //  if(n<=0 |)
          //cout<<"Invalid position";
        while(i<n-1)
        {  
            temp=temp->next;
            i++;
        }
        t1=temp->next;
        temp->next=t1->next;
        free(t1);
        }
  
    cout<<"\nNow the list is ";
    display();
}
void display()
{
    j = head;
    while (j != NULL)
    {
        cout << j->data << " ";
        j = j->next;
    }
    cout << endl;
}

int main()
{
    creation();
   // display();
 //   insertion(10);
    remove();

    return 0;
}
