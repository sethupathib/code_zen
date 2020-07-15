//
//  main.cpp
//  print_pattern
//
//  Created by Sethupathi on 13/01/20.
//  Copyright © 2020 Sethupathi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int n;
    cout<<"Enter No."<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
        
    }
    
//    for (int i=n;i>0;i--)
//       {
//           for(int j=n;j>0;j--)
//           {
//               cout<<"*";
//           }
//           cout<<endl;
//       }
    
    
    
    
    return 0;
}
