//
//  maxheap.cpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "maxheap.hpp"


//BOTTOM-UP HEAPIFY
void maxheap::maxheapBottomUp(int *array, int size)
{
    int subroot = getparent(size - 1);
    
    while(subroot >= 0)
    {
        maxHeapSiftdown(array, subroot, size - 1);
        subroot--;
    }
}

//TOPDOWN HEAPIFY
maxheap::maxheap(int *array, int size)
{
    heapSize = 0;
    
    while(heapSize < size)
    {
        maxheapInsert(array[heapSize], array, heapSize);
    }
}

void maxheap::maxheapInsert(int newVal, int *array, int &hsize)
{
    int i = hsize;
    array[i] = newVal;
    
    while(i > 0 && (array[i] > array[getparent(i)]))
    {
        swap(array[i], array[getparent(i)]);
        i = getparent(i);
    }
    hsize++;
}

int maxheap::maxheapRemove(int *array, int &hsize)
{
    int result = array[0];
    swap(array[0], array[hsize - 1]);
    hsize--;
    maxHeapSiftdown(array, hsize);
    
    return result;
}

void maxheap::maxHeapSiftdown(int *array, int hsize)
{
    maxHeapSiftdown(array, 0, hsize - 1);
}

void maxheap::maxHeapSiftdown(int *array, int left, int right)
{
    bool done = false;
    int i = left;
    
    while(!done && (getleft(i) <= right))
    {
        int maxChild = getleft(i);
        
        if(getright(i) <= right && (array[getright(i)] > array[getleft(i)]))
        {
            maxChild = getright(i);
        }
        
        if(array[maxChild] > array[i])
        {
            swap(array[maxChild], array[i]);
            i = maxChild;
        }
        else
        {
            done = true;
        }
        
    }
}

int maxheap::getleft(int i)
{
    return 2 * i + 1;
}

int maxheap::getright(int i)
{
    return 2 * i + 2;
}

int maxheap::getparent(int i)
{
    return floor((i - 1) / 2 );
}



