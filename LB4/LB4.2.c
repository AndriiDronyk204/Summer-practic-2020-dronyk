#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int a[10][10],m,n, j,i, max, l;
int b[10];
printf("\n Vvedit n,m ");
scanf("%d %d",&n, &m);
printf("   \nMasyv A(n,m):");
for (i=0;i<n;i++)
  {b[i]=0;
  printf("\n");
for (j=0;j<m;j++)
{a[i][j]=rand()% 10 +1;
printf("%d ",a[i][j]);

if(a[i][j]<max)
max=a[i][j];
}
for (j=0;j<m;j++)
if(max==a[i][j])
b[i]++;
max=0;
}
max=0;

for (i=0;i<n;i++)
if(b[i]<=max)
{l=i+1;
max=b[i];}
printf("\n\nNumber of stovpec z k-st max %d",l);

	return 0;   }

