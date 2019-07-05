/*
 * =====================================================================================
 *
 *       Filename:  268_leet.c
 *
 *    Description:  268.缺失的数
 *
 *        Version:  1.0
 *        Created:  2019年07月05日 10时26分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

//通过计算有序数的和减去实际数的和求出没有的数

int missingNumber(int* nums, int numsSize){
	int realSum = 0;

	for (int i = 0; i < numsSize; i++)
		realSum += nums[i];

	return numsSize * (numsSize + 1) / 2 - realSum;

}

