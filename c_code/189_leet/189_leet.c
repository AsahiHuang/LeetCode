/*
 * =====================================================================================
 *
 *       Filename:  189_leet.c
 *
 *    Description:  189.旋转数组
 *
 *        Version:  1.0
 *        Created:  2019年07月05日 10时35分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


void rotate (int * nums, int numsSize, int k){
	int i,j,temp;

	//k == numsSize时操作无意义
	if (k > numsSize)
		k -= numsSize;	
	if (k > 0){
		//先翻转头部,(0 - (numsSize - k -1 )的部分)
		for (i = 0 , j = numsSize - k - 1; i <= j ; i++, j-- ){
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}

		//其次 翻转尾部,(numsSize - k) - (numsSize - 1)
		for (i = numsSize -k, j = numsSize - 1; i <= k; i++,k--){
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}

		//最后,倒序数组即为结果
		for (i = 0,j = numsSize - 1; i <= k; i++, k--){
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
	}
}

