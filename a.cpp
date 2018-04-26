/*
 **************************************************************************************
 *       Filename:  main.cpp
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2018-04-26 00:53:03
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#include <iostream>
using namespace std;

extern "C" void mycpp_func() {
    cout << "hello from cpp" << endl;
    string str="I am a string";
    cout << str << endl;
}

/********************************** END **********************************************/

