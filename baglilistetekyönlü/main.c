#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;
struct node*prev=NULL;
void basaEkle(int veri)
{
    struct node*eleman=(struct node*)malloc(sizeof(struct node));
    eleman->data=veri;
    eleman->next=start;
    start=eleman;
}

void sonaEkle(int veri)
{
    struct node*eleman=(struct node*)malloc(sizeof(struct node));
    eleman->data=veri;
    eleman->next=NULL;
    if(start==NULL)
    {
        start=eleman;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->eleman;

    }

void arayaEkle(int n,int veri)
{
    struct node*eleman=(struct node*)malloc(sizeof(struct node));
    eleman->data=veri;
    temp=start;
    while(temp->next->data!=n)
    {
        temp=temp->next;

    }
    struct node*temp2=(struct node*)malloc(sizeof(struct node));
    temp2=temp->next=eleman;
    eleman->next=temp2;
}
void bastanSil()
{
    if(start!=NULL)
    {
        temp=start->next;
        free(start);
        start=temp;
    }
    else
    free(start);
}
void sondanSil()
{
    if(start->next!=NULL)
    {
        temp=start;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    else
    bastanSil();
}
void aradanSil(int veri)
{
    temp=start;
    if(temp->data==veri)
    {
        bastanSil();
    }
    else
    {
        struct node*temp2;
        temp2=(struct node*)malloc(sizeof(struct node));
        while(temp->next->data!=veri)
        {
            temp=temp->next->next;
        }
        if(temp->next->next->data==NULL)
        {
            sondanSil();
        }
        else
        {
            temp2=temp->next->next;
            free(temp->next);
            temp->next=temp;
        }
    }
void tersCevir()
{
    struct node*temp2=NULL;
    struct node*prev=NULL;
    temp=start;
    while(temp!=NULL)
    {
        temp2=temp->next;
        temp->next=prev;
        prev=temp;
        temp=temp2;
    }
    start=prev;
}
int elemanSay
{
    int adet=0;
    if(start==NULL)
    return adet;
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            adet++;
            temp=temp->next;
        }
        adet++;
        return adet;
    }
}
int dataToplam()
{
    int toplam=0;
    if(start==NULL)
    return 0;
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            toplam+=temp->data;
            temp=temp->next;
        }
        toplam+=temp->data;
    }
    return toplam;
}
int main(){
    int sayi,adet=0,secim,n;
    while(6==6)
    {

        printf("basa eleman eklemek icin 1\n");
        printf("sona eleman eklemek icin 2\n");
        printf("araya eleman eklemek icin 3\n");
        printf("bastan eleman silmek icin 4\n");
        printf("sondan eleman silmek icin 5\n");
        printf("aradan eleman silmek icin 6\n");
        printf("elemanlari ters cevirmek icin 7\n");
        printf("eleman adeti icin 8\n");
        printf("datalarin toplami icin 9\n");
        printf("seciminizi yapin");
        scanf("%d",&secim);
        switch(secim)
        {
        case 1:
            printf("basa eklenecek elemanin degeri:\n");
            scanf("%d",&sayi);
            basaEkle(sayi);
            yazdir()
            break;
        case 2;

        }
    }
{
    printf("Hello world!\n");
    return 0;
}
