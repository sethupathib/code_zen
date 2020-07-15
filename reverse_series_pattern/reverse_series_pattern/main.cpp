//
//  main.cpp
//  reverse_series_pattern
//
//  Created by Sethupathi on 13/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here..
    int n;//,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //k=i;
//        if(i%2!=0){
        for(int j=1;j<=i;j++)
        {
            cout<<i+j-1;
        }
            
//        }
//        else
//        {
//            for(int j=1;j<=i;j++)
//                   {
//                       cout<<k++;
//                   }
//
//        }
            
        
        cout<<"\n";
    }
    return 0;
}
