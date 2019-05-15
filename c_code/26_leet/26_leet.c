/*
 * =====================================================================================
 *
 *       Filename:  59_leet.c
 *
 *    Description:  59_leet 删除排序数组中的重复项
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 14时57分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int removeDuplicates(int* nums, int numsSize)
{
	int i,j,temp,n = 0;

	for (i = 0; i < numsSize; i += j)	//i的移动是根据j累加的大小,即跳过重复位数
	{
		j = 1;
		while (i < numsSize - 1 && nums[i] == nums[i + j])	//防止i处在最后一项
			if (++j + i == numsSize)	 //如果后一项已是最后一项再进行比较会导致越界访问
				break;
		nums[n++] = nums[i];
	}

	return n;		//返回处理后的数组位
}
