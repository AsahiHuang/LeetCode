/*
 * =====================================================================================
 *
 *       Filename:  509_leet.c
 *
 *    Description:  509.斐波拉契数
 *
 *        Version:  1.0
 *        Created:  2019年05月13日 10时54分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  AsahiHuang (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int fib(int N){
	    return N < 2 ? (N == 0 ? 0 : 1) : fib(N - 1) + fib(N - 2);
}
