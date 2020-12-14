#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){


	int M[5][5] = {{2, 4, 6, 7, 8,}, {12, 21, 23, 32, 33},{111, 222, 333, 444, 555,},{123, 321 ,221, 322, 133},{122, 142, 645, 789, 254}};
	int c=1, max = M[0];

	for (int i = 0; i < 4; i++)
    {
        if (M[i] > max)
        {
            max = M[i];
            c = 1;
        }
        else if(M[i]==max)  
            c++;
    }
            
    printf("Max=%d , count %d\n", max,c);
    getchar();
  return 0;
}
