//
//  heapsort.cpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "heapsort.hpp"

heapSort::heapSort(int *array, int size)
{
    m->maxheapBottomUp(array, size);
    int remElem = size;
    
    while(remElem > 1)
    {
        m->maxheapRemove(array, remElem);
    }
}
