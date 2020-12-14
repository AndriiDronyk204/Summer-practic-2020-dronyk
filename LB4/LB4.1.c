#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int M[5][5],i,j, max, x,y,l;
x=0; y=0;
printf("   \nMasyv M(5,5):");
for (i=0;i<5;i++)
  {
  printf("\n");
for (j=0;j<5;j++)
{M[i][j]=rand()% 30 +1;
printf("%d ",M[i][j]);
if(i==j)
{
 if((M[i][j]<5)&&!(l==1))
  { max=M[i][j];
 l=1; x=i+1; y=j+1;}
 else
 if(M[i][j]<5)
 if(M[i][j]>max)
 {max=M[i][j];
 x=i+1; y=j+1;}
 } }}
printf("\n\nMax element diahonaly %d  i,j= %d %d",max,x,y);
	return 0;
}

