//stack using link list
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* start=NULL;

void push(int x)
{
 node* t=new node;
 t->data=x;

 if(start==NULL)
 {
  start=t;
  start->next=NULL;}
else{
 t->next=start;
 start=t;
  }
}
void pop()
{
    if(start==NULL)
    cout<<"underflow"<<endl;
    else{
        node *fr=new node;
        fr=start;
        start=start->next;
        free(fr);
    }
}
void print()
{
     node *z=new node;
     z=start;
     cout<<"LINK LIST"<<endl;
     while(z!=NULL)
     {
     cout<<z->data<<endl;
     z=z->next;}
}
int main()
{
    int ch;
    cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Print"<<endl;
    while(true)
    {cin>>ch;
    switch (ch)
     {
    case 1:
        int x;
        cin>>x;
        push(x);
        break;
    case 2:
         pop();
         break;
    case 3:
          print();
          break;
    default:
        cout<<"Invalid";
        break;
     }
    }
    return 0;
}