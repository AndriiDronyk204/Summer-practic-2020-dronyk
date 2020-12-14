#include <stdio.h>
#include <conio.h>
int main()
{
int i,n;
float min,a[5];
printf ("vvedite n \n");
scanf ("%d", &n);
printf ("vvedite massiv \n");
for (i = 0; i <n; i++)
scanf ("%f", &a[i]);
min=a[1];
for (i = 0; i <n; i++)
{
if(min>a[i])
min=a[i];
printf ("%.f ", min);
}
getch();
}
