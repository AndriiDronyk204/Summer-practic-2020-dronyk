#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             
void sl(int *a, int n) {  
   int i, j, max, min;
    int sum=0;
    for (i =1; i <= n; i++)
    for (j =1; j <= n; j++)
    if(i==j)
sum=sum+*(a + i*n + j); 
printf("\nSuma %d\n",sum);

	for (i =1; i <= n; i++){
    printf("\n");
    for (j =1; j <= n; j++){
    if((*(a + i*n + j))%2==0)
	*(a + i*n + j)=sum;     
	printf("%d ",*(a+i*n+j));  }}
}
int main (){
    int *c;
    int i,j,n,l;
printf("Vvedit n ");
    scanf("%d", &n);
    c =(int *)malloc(n*n*sizeof(int));  
for(i=1; i<=n; i++)
{printf("\n");

for (j=1; j<=n; j++){
*(c + i*n + j)=rand()% 20 +1;
printf("%d ",    *(c + i*n + j));}}
if (c == NULL){{
printf("Error");
return -1;
}}
sl(c,n);
free(c);
return 0;
}

