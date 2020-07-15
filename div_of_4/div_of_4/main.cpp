//
//  main.cpp
//  div_of_4
//
//  Created by Sethupathi on 18/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;

void change (int *a, int l)
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
//    int d=-1;
    for(int j=0;j<num;j++)
    {
        if(a[j]/4 ==0)
            a[j]=-1;
        else a[j]=a[j]/4;
    }
    
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    int a[1000];
    change(a,4);
    return 0;
}
