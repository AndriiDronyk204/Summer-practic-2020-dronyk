#include <stdio.h>
#include <stdlib.h>
#define N 13
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int P[N] = {2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int min = P[0];
	for(int i=0; i < sizeof(P)/13; i++ )
	{
		if(P[i] < min)
		  min = P[i];
	}
	printf("Min number: %d", min);
	
    
}
