# include<stdio.h>
int A[6];
int R=-1;
int F=-1;

void enqueue( int data)
{
    if(R==6-1)
    {
        printf("stack is overflow\n");
    }else if(R==-1&&F==-1)
    {
        R=0;
        F=0;
        A[R]=data;
    }else{
    R++;
    A[R]=data;
    }
}
void  dequeue()
{
    if(R==-1&&F==-1)
    {
        printf(" stack is empty");
    }else if (R==F)
    {
        printf("stack is underflow");
    }
    else{
        R--;
    }

}
int main()
{
       enqueue(150);
       enqueue(250);
       enqueue(350);
       enqueue(450);
       enqueue(550);
       enqueue(650);

       dequeue ();
       dequeue();

       int i;
       for(i=F;i<=R;i++)
       {
           printf("%d\n",A[i]);
       }
}
