//
//  main.cpp
//  binary_pattern
//
//  Created by Sethupathi on 13/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
//    bool num;
    int n=5;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
//            cout<<"1";
            if((i)%2!=0)
            {
                cout<<"1";
                
            }
            else cout<<"0";
        }
        cout<<endl;
    }
    
    return 0;
}
