/*
 **************************************************************************************
 *       Filename:  main.c
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2018-04-26 00:52:12
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#include <stdio.h>

extern void mycpp_func();
int main(int argc, char *argv[])
{
    mycpp_func();
    printf("hello\n");
    return 0;
}


/********************************** END **********************************************/

