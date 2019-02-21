/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Leetcode 771
 *
 *        Version:  1.0
 *        Created:  2019年02月21日 10时14分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAXSIZE 50

int numJewelsInStones(char* J, char* S);

int numJewelsInStones(char* J, char* S) {
	    
	char * p_S = S;
	char * p_J = J;	//创建每个字符串指向字符的指针
	int n = 0;

	while(*p_S != '\0')
	{
		while(*p_J != '\0')
		{
			if(*p_S == *p_J)
			{
				n ++;
				break;
			}
			else 
				p_J ++;	
		}
		p_S ++ ;	//s指向的字符移向下一位	
		p_J = S;	//j指向的字符初始到j字符串开始位置
	}
	return n;
		
}



