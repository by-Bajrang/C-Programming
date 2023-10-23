#include <stdio.h>
struct book 
{
    int bookid;
    char title[20];
    float price;
};
struct book input()
{
    struct book b;
    printf("enter book ID=");
    scanf("%d", &b.bookid);
    printf("enter title=");
    fflush(stdin); // ye buffer ko khali karta hai jesai new value le sake
    gets(b.title);
    printf("enter book price=");
    scanf("%f", &b.price);
    return (b);
}
void display(struct book b)
{
    printf("\n%d/%s/%f", b.bookid, b.title, b.price);
}
int main()
{
    struct book b1;
    b1 = input();
    display(b1);
    return 0;
}