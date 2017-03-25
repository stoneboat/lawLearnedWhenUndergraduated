#include<stdio.h>
#include<stdlib.h>
#define N 32
void bubble_sort(int a[],int n);
void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
                {
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int num[N] = {89,3,5,6,7,9,22,3,55,66,2,3,4,5,8,2,1,2,7,9,45,2,12,43,53,65,3,1,8,0,64,2};
        bubble_sort(num,N);
        for(int i=0;i<N;i++)
           printf("%d   ",num[i]);
        printf("\n");
        system("pause");
        return 0;
}
