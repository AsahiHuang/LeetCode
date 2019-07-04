/*
 * =====================================================================================
 *
 *       Filename:  283_leet.c
 *
 *    Description:  移动零
 *
 *        Version:  1.0
 *        Created:  2019年07月04日 11时26分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


//思路一: 将非零和零元素分开考虑,先把非零元素依次排列到数组前面,再将其余置零


void moveZeroes(int* nums, int numsSize){
	int n;	// 用来记录元素个数

	for (int i = 0; i < numsSize; i++)
		if (nums[i] != 0){
			nums[n] = nums[i];
			n++;
		}
	for (int j = n; i < numsSize; j++)
		nums[j] = 0;
}



