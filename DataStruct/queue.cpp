//
//  queue.cpp
//  DataStruct
//
//  Created by admin on 2020/8/22.
//  Copyright © 2020 liZ. All rights reserved.
//

#include "queue.hpp"

Queue::Queue(int size){
    this->arr_ = new int[size];
    this->capacity_=size;
    this->front_=0;
    this->back_=-1;
    this->length_=0;
}

Queue::~Queue(){
    delete [] this->arr_;
}

int Queue::len(){
    return this->length_;
}

bool Queue::isEmpty(){
    return (this->length_ ==0 );
}
bool Queue::isFull(){
    return (this->length_ == this->capacity_);
}
void Queue::push(int value){
    if(isFull()){
        std::cout << "Error ! this queue is Full! " << std::endl;
        exit(-1);
    }else{
        this->back_ = (this->back_ +1) % this->capacity_;
        this->arr_[this->back_] = value;
        this->length_ += 1;
    }
}
int Queue::peek(){
    int rs= 0;
    if(isEmpty()){
        std::cout << "" << std::endl;
        exit(-1);
    }else{
        rs = this->arr_[this->front_];
    }
    return rs;
}

int Queue::pop(){
    int rs=0;
    if(isEmpty()){
        std::cout << ""<<std::endl;
        exit(-1);
    }else{
        rs = this->arr_[this->front_];
        this->front_= (this->front_+1)% this->capacity_;
        this->length_ -=1;
    }
    return rs;
}

void Queue::toString(){
    if(this->isEmpty()){
        std::cout << "queue []" <<std::endl;
    }else{
        std::cout << "queue [" << this->arr_[this->front_];
        for(int idx = 1; idx < this->length_; idx++){
            std::cout <<"," << this->arr_[front_+idx] ;
        }
        std::cout << "]" <<std::endl;
    }
}
