#include<stdio.h>
#include<stdlib.h>
struct list{
    int data;
    struct list* next;};
struct list* create(int data){
    struct list* newNode=(struct list*) malloc(sizeof(struct list));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
    }
struct list* start=NULL;
void InsertNode(struct list* start)
{
    struct list *p;
    if(start==NULL)
    {start=create(15);
    p=start;}
    else
    {
      p->next=create(14);
      p->next=p;
      p->next=NULL;
    }

}
int main()
{
    struct list* t;
    while(t->next!=NULL){
        printf("%d",t->data);
    }
 return 0;   
}


