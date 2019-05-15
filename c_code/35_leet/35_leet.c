/*
 * =====================================================================================
 *
 *       Filename:  35_leet.c
 *
 *    Description:  搜索插入位置
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 16时14分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int searchInsert(int* nums, int numsSize, int target){
	int i,n = 0;

	for (i = 0; i < numsSize; i++)
		if (nums[i] >= target)
		{
			n = i;
			break;
		}
	if (i == numSize)		//该数组内的最大,位置末尾
		n = numsSize;
	return n;
}
