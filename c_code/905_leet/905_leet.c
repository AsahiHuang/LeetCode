/*
 * =====================================================================================
 *
 *       Filename:  905_leet.c
 *
 *    Description:  905 按奇偶排序数组
 *
 *        Version:  1.0
 *        Created:  2019年05月14日 10时34分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int * sortArrayByParity(int * A , int ASize, int * returnSize)
{
	int i,j; //对应左指针和右指针
	int temp;

	i = 0;
	j = ASize - 1;

	while (i < j)
	{
		//左为奇数,右为偶数时 交换两值
		if (A[i] % 2 == 1 && A[j] % 2 == 0)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		else if (A[i] % 2 == 0)
			i++;
		else if (A[j] % 2 == 1)
			j--;
	}
	*returnSize = Asize;
	return A;
}


