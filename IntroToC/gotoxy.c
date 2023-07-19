#include<windows.h>
#include<stdio.h>
#include<conio.h>

void gotoxy(int x,int y){
   
   COORD C;
   C.X = x;
   C.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);

}

int main(){
    int i;
    for(i=1;i<=10;i++){
    gotoxy(29,i);
    printf("hello  world");
    }
    getch();
    return 0;
}