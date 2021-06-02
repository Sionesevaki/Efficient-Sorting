//
//  heapsort.hpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef heapsort_hpp
#define heapsort_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include "maxheap.hpp"

using namespace std;

class heapSort
{
public:
    heapSort(int [], int size);
    maxheap *m;
};

#endif /* heapsort_hpp */
