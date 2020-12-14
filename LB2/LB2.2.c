#include <stdio.h>
 
#define R       10
#define N       5       //кількість мінімальних елементів
 
long long arr[R] = {23,1,56,-7,99,9,0,4,77,-17};
 
long long findMinimal(long long leastDig);
 
int main(void)
{
    int j;
	int minCount = 0;
    long long min[N] = {1 << 31};  //Массив N количества искомых
    #define I (minCount == 0) ? minCount: minCount-1
    
    //запис N мінімальних в массив min
    for(int i = 0; i < N; i++, minCount++)
        min[minCount] = findMinimal(min[I]);
    
    
    //вивід
    printf("String of numbers:\n");
    for(int i = 0; i < R; i++)
        printf("%lld ", arr[i]);
    
    printf("\n\n%d minimal numbers:\n", N);
    for(int i = 0; i < minCount; i++)
    {
        printf("%d. %lld\n", i, min[i]);
    }
    return 0;
}
 
 
long long findMinimal(long long leastDig)
{
    long long tmp = ~(1 << 31);//отримати максимальне число
    int i = 0;
    while(i < R)
    {
        //якщо теперішнє число менше tmp и більше раніше знайденого, то запишем нове
        if(arr[i] <= tmp && arr[i] > leastDig)
            tmp = arr[i];
        i++;
    }
	   
    return tmp;
}
