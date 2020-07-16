//
//  linked_list.hpp
//  DataStruct
//
//  Created by admin on 2020/7/17.
//  Copyright © 2020 liZ. All rights reserved.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>

template <typename T> class Node{
public:
    T value;
    Node *next;
    Node *previous;
    Node(T value){
        this->value = value;
    }
};

template <typename T > class LinkedList{
private:
    int size_;
    Node<T> *head_ = NULL;
    Node<T> *tail_ = NULL;
    Node<T> *itr_ = NULL; // iterator
    
public:
    LinkedList(){
        this->size_=0;

    }
    void prepend(T value){
        // check
        if( this->head_ == NULL){
            this->head_ = new Node<T>(value);
            this->tail_ = this->head_;
            
        }else{
            this->head_->previous = new Node<T>(value);
            this->head_->previous->nex = this->head_;
            this->head_ = this->head_->previous;
        }
        this->size_+=1;
    }
    void append(T){
        if( this->head_ == NULL){
            
            
        }else{
            
        }
    }
    
    

};



#endif /* linked_list_hpp */
