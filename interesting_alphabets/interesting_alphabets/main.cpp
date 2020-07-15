//
//  main.cpp
//  interesting_alphabets
//
//  Created by Sethupathi on 13/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num=65,n;
    cout<<"Enter No.";
    cin>>n;
    
    for (int i =0;i<n; i++) {
        {
            for(int j=i;j>=0;j--)
            {
//                if(i+j)
                printf("%c",char(num+n-j-1));
//                n--;
            }
            
            cout<<"\n";
        }
        
    }
    return 0;
}
