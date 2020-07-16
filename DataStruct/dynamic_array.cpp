//
//  dynamic_array.cpp
//  DataStruct
//
//  Created by admin on 2020/7/16.
//  Copyright © 2020 liZ. All rights reserved.
// private is xxx_ @see https://google.github.io/styleguide/cppguide.html#Variable_Names
// class is Xyz @see https://google.github.io/styleguide/cppguide.html#Classes
// filename is xYz @see https://google.github.io/styleguide/cppguide.html#Naming
// function is XxxYyyZzz() @see https://google.github.io/styleguide/cppguide.html#Functions


#include "dynamic_array.hpp"


DynamicArray::DynamicArray(){
    // constructor
    this->size_=0;
    this->max_=10;
    this->arrayholder_ = new int[this->max_];
}

DynamicArray::~DynamicArray(){
    std::cout << "call ~~~~";
    delete []this->arrayholder_;
}

int DynamicArray::size(){
    return this->size_;
}

int& DynamicArray::operator[](int i){// set
    assert( i < this->size_ );
    return this->arrayholder_[i];
}

void DynamicArray::append(int value){
    if(this->max_ < this->size()+1){ // this array is full.
        this->max_*=2;
        // malloc double space
        int* tmp = new int[this->max_];
        for(size_t i=0; i< this->size_; i++){
            tmp[i] = this->arrayholder_[i];
        }
        
        delete [] this->arrayholder_;
        this->arrayholder_ = tmp;
        this->arrayholder_[this->size_]=value;
        this->size_+=1;
        
    }else{
        this->arrayholder_[this->size_]=value;
        this->size_+=1;
    }
}

int DynamicArray::remove(int idx){
    // check i
    assert(idx >=0 && idx< this->size_);
    
    int temp=this->arrayholder_[idx];
    for(int i=idx; i< this->size_-1; i++){
        this->arrayholder_[i]=this->arrayholder_[i+1];
    }
    this->size_-=1;
    return temp;
}

void DynamicArray::toString(){
    if(this->size_ == 0){
        std::cout<<"[]"<< std::endl;
    }else{
        std::cout<<"[" << this->arrayholder_[0];
        for(int i=1; i< this->size_; i++){
            std::cout <<" ,"<< this->arrayholder_[i];
        }
        std::cout<< "]" << std::endl;
    }
}

