//
//  main.cpp
//  print100to1
//
//  Created by Harsha on 9/7/19.
//  Copyright © 2019 Harsha. All rights reserved.
//
//http://www.thousandtyone.com/blog/EasierThanFizzBuzzWhyCantProgrammersPrint100To1.aspx
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    for(int i=0;;)
    {
        if(i==0)
        {
            i=100;
        }
        cout<<i--<<endl;
        if(i==0)
            break;
    }
    
    return 0;
}
