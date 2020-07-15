//
//  main.cpp
//  2_3_multiple
//
//  Created by Sethupathi on 18/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX 1000


int FindSum(int *a,int num)
{
    int sum=0;
//    cin>>num;
//    for(int i=0;i<num;i++)
//    {
//        cin>>a[i];
//    }
//
    for(int i=0;i<num;i++)
    {
        if(a[i]%2 ==0 || a[i]%3 ==0)
        {
            sum+=a[i];
        }
    }
    return sum;
    
}




int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    int num,a[MAX];
    int sum=0;
//    cout<<"Enter array size";
    cin>>num;
//    cout<<"Enter the elements of the array";
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Entered numbers are -->";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<endl;
    }
    
    for(int i=0;i<num;i++)
    {
        if(a[i]%2 ==0 || a[i]%3 ==0)
        {
            sum+=a[i];
        }
    }
    
    int sum1= FindSum(a,4);
    cout<<sum1;
    return 0;
}

