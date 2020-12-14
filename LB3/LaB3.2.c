#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int G[6][6],i,j;
printf("   \nMasyv G(6,6):");
for (i=0;i<6;i++)
printf("\n");
for (j=0;j<6;j++)
{G[i][j]=rand()% 30 +1;
printf("%d ",G[i][j]);
}}

