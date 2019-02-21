/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  709.转换成小写字母
 *
 *        Version:  1.0
 *        Created:  2019年02月21日 10时52分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

char* toLowerCase(char* str) {
    
	char ch = * str;
	char * pt = str;

	while(ch != '\0')
	{
		if(ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
			*pt = ch;
		}
		pt ++;
		ch = * pt;	//指向字符串下一个字符
	}
	return str;
}
