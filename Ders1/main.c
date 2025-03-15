#include <stdio.h>
#include <stdlib.h>
//araya eleman ekleme[int data,int ara]//
struct node


{
    int data;
    struct node*next
};
struct node*start;
struct node*yenidugum(int data)
{
    struct node*dugum=(struct node*)malloc8(sizeof(struct node));
    dugum-> data=data;
    dugum-> next=NULL;
    return(dugum);
};



 void arayaEkle(int yeniData,int index)


 {
     struct node*eklenen=yenidugum(yeniData);
     struct node*temp=Start;
         while(temp->  data!=arananData)
         {
             temp=temp->next;
         }


        eklenen-> next=temp-> next;
        temp-> next=eklenen;








         }

 }
