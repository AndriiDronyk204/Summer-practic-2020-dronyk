#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("Vvedir koord tochku(x,y)");
	scanf("%f%f", &x,&y);
	if((x>=2)&&(y>=5)&&(y<=-5))
	{if(x+y*y>5)
	printf("Tochka vhodyt v vydilenu oblast");
	else
	printf("Tochak ne vhodyt v vydilenu oblast");
}
    printf("tochka ne vhodyt v vydilenu oblast");
	return 0;
}
