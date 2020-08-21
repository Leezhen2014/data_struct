//
//  linked_list.hpp
//  DataStruct
//
//  Created by admin on 2020/7/17.
//  Copyright © 2020 liZ. All rights reserved.
/**  TODO1: 声明并且实现了一个类， 虽然可以完成一定的功能， 但最好不要这么做，尽量把实现和声明分开， 我们应该怎么去做？PS: 这个是有模板的
https://stackoverflow.com/questions/1724036/splitting-templated-c-classes-into-hpp-cpp-files-is-it-possible/1724632

https://www.codeproject.com/Articles/48575/How-to-Define-a-Template-Class-in-a-h-File-and-Imp
 
 The common procedure in C++ is to put the class definition in a C++ header file and the implementation in a C++ source file. Then, the source file is made part of the project, meaning it is compiled separately. But when we implement this procedure for template classes, some compilation and linking problems will arise
 
**/
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

template <class T > class LinkedList{
private:
    int size_;
    Node<T> *head_ = NULL;
    Node<T> *tail_ = NULL;
    Node<T> *itr_ = NULL; // iterator
    
public:
    LinkedList();
    
    void prepend(T value);
    void append(T value);
    void toString();
    // get
    // set
    // insert
    // remove
    
};



#endif /* linked_list_hpp */
