#include<stdio.h>
#include<conio.h>
int main()
{
int sayi1, sayi2, x;
printf("2 sayi giriniz:");
scanf_s("%d %d", &sayi1, &sayi2);
if (sayi2>sayi1)
{
x = sayi2;
printf("buyuk sayi %d \n", x);
}
else if (sayi1>sayi2)
{
x = sayi1;
printf("buyuk sayi %d \n", x);
}
else 
{
printf("Sayilar birbirine esit.");
}
_getch();
return 0;
}
