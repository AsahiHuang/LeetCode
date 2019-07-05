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
	int i,res,count;
	i = count = 0;

	while (i < numsSize){
		if (!count)
			res = nums[i];
		count += (res == nums[i] ? 1:-1);
		i++;
	}
	return res;
}
