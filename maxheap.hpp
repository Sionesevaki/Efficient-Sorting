//
//  maxheap.hpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef maxheap_hpp
#define maxheap_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class maxheap
{
public:
    maxheap(int [], int);
    void maxheapBottomUp(int [], int);
    void maxheapInsert(int, int [], int &);
    int maxheapRemove(int [], int &);
    void maxHeapSiftdown(int [], int);
    void maxHeapSiftdown(int [], int, int);
    int getleft(int);
    int getright(int);
    int getparent(int);
    
private:
    int *heap;
    int heapSize;
    
};

#endif /* maxheap_hpp */
