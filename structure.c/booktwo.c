#include <stdio.h>
struct book
{
    int bookid;
    char titel[20];
    float price;
};
struct book input()
{
    struct book b;
    printf("enter book ID -> ");
    scanf("%d", &b.bookid);
    printf("enter titel -> ");
    scanf(" %19[^\n]", b.titel);
    printf("enter book price -> ");
    scanf("%f", &b.price);
    return (b);
}
void display(struct book b)
{
    printf("\n%d/%s/%f\n", b.bookid, b.titel, b.price);
}

int main()
{
    struct book b1;
    b1 = input();
    display(b1);

    return 0;
}