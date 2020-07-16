//
//  main.cpp
//  DataStruct
//
//  Created by admin on 2020/7/16.
//  Copyright © 2020 liZ. All rights reserved.
//

#include <iostream>
#include "dynamic_array.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    DynamicArray darray;
    for (int i = 0; i <= 15; i++)
    {
        darray.append(i);
    }
    
    darray.toString();
    darray[1]=1024;
    std::cout<<darray[1] << std::endl;
    darray.toString();
    darray.remove(1);
    darray.toString();
    
    
    return 0;
}

