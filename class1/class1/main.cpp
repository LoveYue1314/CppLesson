//
//  main.cpp
//  class1
//
//  Created by vaanner on 14/11/1.
//  Copyright (c) 2014年 CPP. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    int i = 1024;
    int *p = NULL;
    int *p1 = &i;
    int *p2 = p1;
    *p1 = 0;
    cout<<*p2<<"   "<<i;
}