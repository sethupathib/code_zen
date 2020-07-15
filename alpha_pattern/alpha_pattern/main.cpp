//
//  main.cpp
//  alpha_pattern
//
//  Created by Sethupathi on 13/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int num=65,n;
    cout<<"Enter no.";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            char ch= char(num);
            cout<<ch;
        }
        num++;
        cout<<endl;
    }
//    std::cout << "Hello, World!\n";
    return 0;
}
