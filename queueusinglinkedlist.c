#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node* F;
struct node*R;
void enqueue(int x)
{
    struct node*head;
    head=(struct node*)malloc (sizeof(struct node));
    head->data=x;
    head->next=NULL;
    if(F==NULL&&R==NULL)
    {
        F=R=head;

    }else{
    R->next=head;
    R=head;

    }

}
void dequeue()
{
    struct node*temp;
    temp=F;
    F=F->next;
    free(temp);
}
int main()
{
    enqueue(1);
     enqueue(2);
      enqueue(3);
       enqueue(4);
        enqueue(5);
        dequeue();
        struct node*ptr;
        ptr=F;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
}

