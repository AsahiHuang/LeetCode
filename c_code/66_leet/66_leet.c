/*
 * =====================================================================================
 *
 *       Filename:  66_leet.c
 *
 *    Description:  66_leetcode 加一
 *
 *        Version:  1.0
 *        Created:  2019年05月17日 15时20分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int* plusOne(int* digits, int digitsSize, int* returnSize){
	int size = digitsSize;
	int i = size - 1;

	while (i > 0 && digits[i] > 9)
	{
		digits[i--] = 0;
		digits[i] += 1;
	}
	if (digits[0] > 9)
	{
		size++;
		int * array = (int * )malloc(size * sizeof(int));
		for (int j = 1; j < size; j++)
			array[j] = 0;
		array[0] = 1;
		*returnSize = size;
		return array;
	}
	*returnSize = size;
	return digits;
}
