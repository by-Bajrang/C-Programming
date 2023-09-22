#include <stdio.h>
#include <conio.h>
int main()
{
  int i;  
  char S[3][10];
    printf("enter three  string ");
    for(i=0;i<=2;i++)               
    gets(&S[i]);


    for(i=0;i<=2;i++)
  printf("%s\n",S[i]);//  ye kam ku nahi  ker raha kuki yaha small s ayega naki capital S of string ke naam wala
 // puts(S[i]);          
  getch();
}
      