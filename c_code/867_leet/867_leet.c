/*
 * =====================================================================================
 *
 *       Filename:  867_leet.c
 *
 *    Description:  给定一个矩阵 A， 返回 A 的转置矩阵。
	 矩阵的转置是指将矩阵的主对角线翻转，交换矩阵的行索引与列索引。
 *
 *        Version:  1.0
 *        Created:  2019年07月02日 10时02分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
	int m = ASize;
	int n = *AColSize;
	int ** res = (int **) malloc (sizeof(int * ) * n);
	*returnSize = n;
	for (int i = 0; i < n; i++){
		int * newone = (int * )malloc(sizeof(int) * m);
		for (int j = 0; j < m; j ++)
			newone[j] = A[j][i];
		res[i] = newone; 
		(*returnConlumSizes)[i] = m;
	}
	return res;
}
