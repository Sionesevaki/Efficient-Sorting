//
//  quicksort.hpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef quicksort_hpp
#define quicksort_hpp

#include <stdio.h>
#include <string>

using namespace std;

class quicksort
{
public:
    quicksort(int array[], int left, int right);
    quicksort(int array[], int size);
    int partition(int array[], int left, int right);
};

#endif /* quicksort_hpp */
