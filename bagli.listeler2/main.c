
#include <stdio.h>

struct node
{
    int data;
    struct node*next
};
struct node*Start;
struct node*yeniDugum(int data)
{
    struct node*dugum=(struct node*)malloc(sizeof(struct node));
    dugum->data=data;
    dugum->next=NULL;
    return(dugum);

}
int main()
{
    Start=yeniDugum(5);
    printf("%d",Start->data);
}





