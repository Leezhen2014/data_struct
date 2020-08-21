//
//  main.cpp
//  DataStruct
//
//  Created by admin on 2020/7/16.
//  Copyright © 2020 liZ. All rights reserved.
//

#include <iostream>
#include "dynamic_array.hpp"
#include "linked_list.hpp"
#include "linked_list.cpp" // use template

#include "queue.hpp"

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
    std::cout<<"~~~~~~~~~~~~"<< std::endl;
    LinkedList<int> llist;
    llist.append(10);
    llist.append(12);
    llist.append(14);
    llist.append(16);
    llist.prepend(5);
    llist.prepend(4);
    llist.prepend(3);
    llist.prepend(2);
    llist.prepend(1);
    llist.toString();
    
    
    std::cout << "~~~~~~ queue ~~~~~~~" <<std::endl;
    
    Queue queue(10);
    queue.push(1);
    queue.push(3);
    queue.push(5);
    
    queue.toString();
    std::cout << "peek:"<<queue.peek()<<std::endl;
    int value = queue.pop();
    std::cout << "pop :"<< value << std::endl;
    queue.toString();
    return 0;
}

