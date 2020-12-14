#include <stdio.h>
 
#define R       10
#define N       5       //������� ��������� ��������
 
long long arr[R] = {23,1,56,-7,99,9,0,4,77,-17};
 
long long findMinimal(long long leastDig);
 
int main(void)
{
    int j;
	int minCount = 0;
    long long min[N] = {1 << 31};  //������ N ���������� �������
    #define I (minCount == 0) ? minCount: minCount-1
    
    //����� N ��������� � ������ min
    for(int i = 0; i < N; i++, minCount++)
        min[minCount] = findMinimal(min[I]);
    
    
    //����
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
    long long tmp = ~(1 << 31);//�������� ����������� �����
    int i = 0;
    while(i < R)
    {
        //���� ������� ����� ����� tmp � ����� ����� ����������, �� ������� ����
        if(arr[i] <= tmp && arr[i] > leastDig)
            tmp = arr[i];
        i++;
    }
	   
    return tmp;
}
