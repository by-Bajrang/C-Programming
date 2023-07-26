#include <stdio.h>
#include <conio.h>
                    //int x,y; yaha sabke liya declear ho gaya samja kya bye
void main()
{
    int x,y;                 // x&y yaha declear hai
    void add (int,int);           
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    add(x,y);               //actual arguments x & y boltai hai // call by value
    getch();
}

void add(int a,int b )    // formal arguments a & b ko boltai hai
{ 
    int c;
    c=a+b;
    printf("sum is %d", c);
}
