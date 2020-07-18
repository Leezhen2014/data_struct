//
//  linked_list.hpp
//  DataStruct
//
//  Created by admin on 2020/7/17.
//  Copyright © 2020 liZ. All rights reserved.
//  TODO1: 声明并且实现了一个类， 虽然可以完成一定的功能， 但最好不要这么做，尽量把实现和声明分开， 我们应该怎么去做？
//  TODO2: 填充未实现的方法

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>
#include <iostream>

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
            // connect node in head
            this->head_->previous = new Node<T>(value);
            this->head_->previous->next = this->head_;
            this->head_->previous->previous=NULL;
            // move head
            this->head_ = this->head_->previous;
        }
        this->size_+=1;
    }
    void append(T value){
        if( this->head_ == NULL){
            this->head_ = new Node<T>(value);
            this->tail_ = this->head_;
        }else{
            // connect node in tail
            this->tail_->next = new Node<T>(value);
            this->tail_->next->previous = this->tail_;
            this->tail_->next->next=NULL;
            // move tail
            this->tail_ = this->tail_->next;
        }
        this->size_ +=1;
    }
    void toString(){
        Node<T>* tmp = this->head_;
        std::cout << "[ " ;
        if(this->size_ != 0 ){
            // frist value
            std::cout << tmp->value;
            tmp = tmp->next;
            // second --> tail_
            for(int i=1; i< this->size_; i++){
                std::cout << "," << tmp->value;
                tmp = tmp->next;
            }
        }
        std::cout << "] "<< std::endl ;
        // free
        free(tmp);
    }
    // get
    // set
    // insert
    // remove
    
};



#endif /* linked_list_hpp */
