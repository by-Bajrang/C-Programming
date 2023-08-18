#include<stdio.h>
#include<conio.h>
int main ()
{

 char s[20];
 printf("enter your name");
 //scanf("%s",s); 
      //OR
  scanf("%s",&s[0]);    
 
//int i;
//for (i=0;s[i]!='\0';i++) 
            //OR
//for(i=0;<=7;i++) esmai hamko counting karna par raha hai samja
//printf("%c",s[i]);
            //OR 
    puts(s); // or puts(&s[0]);
    getch();       
}