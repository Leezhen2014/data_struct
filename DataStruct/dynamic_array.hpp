//
//  dynamic_array.hpp
//  DataStruct
//
//  Created by admin on 2020/7/16.
//  Copyright © 2020 liZ. All rights reserved.
//  https://google.github.io/styleguide/cppguide.html#Header_Files

#ifndef dynamic_array_hpp
#define dynamic_array_hpp

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <iostream>

class DynamicArray{
private:
    int size_;
    int max_;
    int *arrayholder_;
public:
    DynamicArray();
    ~DynamicArray();
    int size();
    int& operator[](int idx);
    void append(int value);
    // 此处缺少deletef方法， 注意 codeStyle
    int remove(int idx);
    void toString();
};
#endif /* dynamic_array_hpp */
