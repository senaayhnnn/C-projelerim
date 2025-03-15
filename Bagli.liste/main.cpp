#include<stdio.h>


struct node
{
   int data;
   struct node*next;
};
struct node*start;
struct node*yeniDugum(int data)
{
    struct node*dugum=(struct node*)malloc(sizeof(struct node));
    dugum->data=data;
    dugum->next=NULL;
    return(dugum);
};




int main()
{
    start=yeniDugum(5);
    printf("%d",start->data);
    struct node*ikinciEleman=yeniDugum(10);
    struct node*ucuncuEleman=(15);

    start->next=ikinciEleman;
    ikinciEleman->next=ucuncuEleman;
}
