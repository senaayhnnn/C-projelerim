#include <stdio.h>
#define BOYUT 5
void push(int veri)
{
    if(top+1==15)
        printf("Stack Dolu");
}
else
{
    top++;
    dizi[top]=veri;

   }

    top++;
    dizi[top]=veri;s
}
int pop()
{
    int data=dizi[top];
    top--;
    return data;

}
void yazdir()
{
    for(int i=0; i<top+1; i++)
    {
        printf("")
    }
}
