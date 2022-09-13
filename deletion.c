#include <stdio.h>
int pos = 0, a[10], i, element=21, size=7, k=3,g;
void swap(int element)
{
    g=3;
    for(int i=size-1;i>g;i--)
    {
        a[pos+1]=a[pos];
    }
    a[g]=element;
}
void deletion(int k)
{
    for(int i=k; i<size-1; i++)
    {
        a[i]=a[i+1];
    }
    pos-=1;
}
void frontInsert(int s)
{
    s=0;
    for(int i=size-1; i>=s; i--)
    {
        a[i+1]=a[i];

    }
    a[s]=element;
    pos++;
}
void lastInsert(int n)
{
    a[pos++] = n;
}
void print()
{
    for (i = 0; i < pos; i++)
    {
        printf("\n\t %d", a[i]);
    }
}
int main()
{
    int n;
    
    lastInsert(12);
    lastInsert(13);
    lastInsert(14);
    lastInsert(15);
    lastInsert(16);
    lastInsert(18);
    frontInsert(21);
    deletion(3);
    swap(30);
  
    print();
}
