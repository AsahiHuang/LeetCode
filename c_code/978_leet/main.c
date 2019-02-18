/**
   * Return an array of size *returnSize.
    * Note: The returned array must be malloced, assume caller calls free().
	 */
#include<stdio.h>
#define SIZE  100


int maxTurbulenceSize(int* A, int ASize);
int main(void)

{
	int A[SIZE];
	int * p;
	int n,length;
	int i = 0;
	
	printf("enter number:");
	while  (((scanf("%d",&n)) == 1) && i < SIZE)
	{
		A[i++] = n;
		printf("enter next:");
	}
	if(i == 0)
		printf("faild to add!\n");
	length = i;
    printf("number: %d\n", maxTurbulenceSize(A,length));
	return 0;
}
int maxTurbulenceSize(int* A, int ASize)
{
	int n,flag,max;
	int Num,NextNum;
	flag = 0;
	n = 2;

	if (ASize == 1)
		return 1;
	for (int i = 0 ; i < ASize - 1 ; i ++)
	{
		Num = *(A+i);
		NextNum = *(A+i+1);
		if((Num > NextNum) && flag == 0)
		{
			n++;
			flag = 1;
		}
		else if((Num < NextNum) )
		{
			if (flag == 1)
				n++;
			flag = 0;
		}
		else
		{
			if(max < n)
				max =n;
			n = 2;
		}
	}
	if (max >= n)
		n = max;
	return n;
}

