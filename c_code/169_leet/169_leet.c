/*
 * =====================================================================================
 *
 *       Filename:  169_leet.c
 *
 *    Description:  169.求众数
 *
 *        Version:  1.0
 *        Created:  2019年07月05日 15时31分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


//投票算法的应用

int majorityElement(int* nums, int numsSize){
	int count = 1, res = nums[0];
	int i = 1;

	while (i < numsSize - 1){
		count += (nums[i] == res ? 1:-1);
		if (!count){
			res = nums[++i];
			count = 1;
		}
		i++;
	}
	return res;
}
