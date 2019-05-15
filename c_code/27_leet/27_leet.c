/*
 * =====================================================================================
 *
 *       Filename:  27_leet.c
 *
 *    Description:  移除元素
 *
 *        Version:  1.0
 *        Created:  2019年05月15日 15时57分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int removeElement(int* nums, int numsSize, int val){
	int n  = numsSize;
	int i = 0;

	while (n && i < n)		//判断n不为0是为了当遇到空数组时无需处理
	{
		if (nums[i] == val)
		{
			for (int j = i; j < n - 1; j++)
				nums[j] = nums[j + 1];
			n--;			//这里n再移位后再减一,不然造成末尾元素遗漏
		}
		else 
			i++;			//不相等时再判断下一位
	}

	return n;
}
