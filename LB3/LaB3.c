#include <stdio.h> 
#include <locale.h> 
#include <stdlib.h>
int main() 
{
    int min, j[3][5];
    printf ("Vvedit kilkist riadkiv i stovpc ne bilshe 3-õ\n");
    int n, m;
    printf ("kilkist riadkiv =");
    scanf ("%d", &n);
    printf ("kilkist stovpc =");
    scanf ("%d", &m);
    int i, a;
    for (i=0; i<n; i++){
        for (a=0; a<m; a++){
            j[i][a]=rand()%99-1;
        }
    }
    for (i=0; i<n; i++, putchar('\n')){
        for (a=0; a<m; a++){
            printf (" %d", j[i][a]);
        }
    }
    return 0;
}
