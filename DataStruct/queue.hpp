//
//  queue.hpp
//  DataStruct
//
//  Created by admin on 2020/8/22.
//  Copyright © 2020 liZ. All rights reserved.
/**
 *  queue 是一种FIFO的数据结构
 *   什么是FIFO呢？ Frist in Frist Out, 即为先进先出。 也就是说这种数据结构里面所有的元素都是遵循先进先出的s
 *   如何实现？ 队列可以 依靠 linkList 实现， 也可以依靠array list 来实现
 *
 *********************
 * ref： https://www.techiedelight.com/queue-implementation-cpp/
 *     https://www.tutorialspoint.com/cplusplus-program-to-implement-queue-using-array
 *     http://www.cplusplus.com/reference/queue/queue/
 **/

#ifndef queue_hpp
#define queue_hpp

#include <stdio.h>
#include <iostream>

#define SIZE 10

class Queue{
    int *arr_; // array list to store elements
    int capacity_; // maximun capacity of the queue
    int front_;
    int back_;
    int length_;
public:
    Queue(int size);
    ~Queue();
    bool isEmpty(); // Test whether container is empty
    int peek();
    int pop(); // pop_front
    void push(int value); // push_back
    int len();
    bool isFull();
    void toString();
};
#endif /* queue_hpp */
