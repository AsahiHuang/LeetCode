/*
 * =====================================================================================
 *
 *       Filename:  1002_leet.c
 *
 *    Description:  给定仅有小写字母组成的字符串数组 A，
	返回列表中的每个字符串中都显示的全部字符（包括重复字符）组成的列表。
	例如，如果一个字符在每个字符串中出现 3 次，但不是 4 次，则需要在最终答案中包含该字符 3 次。
 *
 *        Version:  1.0
 *        Created:  2019年07月02日 14时28分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
char ** commonChars(char ** A, int ASize, int* returnSize){
	char  count[26],now[26];
	memset(count,127,26);
	char ** res = (char **)malloc(sizeof(char *) * 1000);
	char * p;

	for (int i = 0; i < ASize; i++){
		p = A[i];
		while (*p != '\0'){
			now[*p - 'a']++;
			p++;
		}
		for (int j = 0; j < 26; j++){
			count[j] = min(count[j] , now[j]);
			now[j] = 0;
		}
	}
	*returnSize = 0;
	for (int i = 0; i < 26; i++){
		for (int j = 0; j < count[i] ; j++){
			res[*returnSize] = (char * ) malloc (sizeof(char) * 2);
			res[*returnSize][0] = count[i] + 'a';
			res[*returnSize][1] = '\0'; 
			*resturnSize += 1;
		}
	}
	return res;
	    
}


