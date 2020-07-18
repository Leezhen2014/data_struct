//
//  stacks.hpp
//  DataStruct
//
//  Created by admin on 2020/7/18.
//  Copyright © 2020 liZ. All rights reserved.
//

#ifndef stacks_hpp
#define stacks_hpp

#include <stdio.h>
#include <iostream>

template <typename T>
class Node{
public:
    T value;
    Node *next;
    Node(T value){
        this->value=value;
    }
};

template <typename T>
class Stack{
private:
    int size_;
    Node<T>* top_ = NULL;
    Node<T>* itr_ = NULL;
public:
    Stack(){
        this->size_ = 0;
    }
    void push(T value){
        if(this->top_ == NULL){
            this->top_ = new Node<T>(value);
        }else{
            Node<T>* tmp = new Node<T>(value);
            tmp->next = this->top_;
        }
        this->size_;
    }
    
    Node<T>* pop(){
        Node<T>* tmp =  this->top_;
        
    }
}



#endif /* stacks_hpp */
