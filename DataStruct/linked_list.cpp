//
//  linked_list.cpp
//  DataStruct
// https://www.tutorialspoint.com/cplusplus-program-to-implement-queue-using-array
//  Created by admin on 2020/7/17.
//  Copyright © 2020 liZ. All rights reserved.
//

#include "linked_list.hpp"
template <class T > LinkedList<T>::LinkedList(){
    this->size_=0;
};

template <class T > void LinkedList<T>:: prepend(T value){
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
};

template <class T> void LinkedList<T>:: append(T value){
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

template <class T> void LinkedList<T>:: toString(){
    Node<T>* tmp = this->head_;
    std::cout << "[ " ;
    if(this->size_ != 0 ){            // frist value
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
