//
//  quicksortBad.cpp
//  efficient_sorting
//
//  Created by Sione on 3/12/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "quicksortBad.hpp"

quicksortBad::quicksortBad(int *array, int left, int right)
{
    if(left < right)
    {
        int division = bad_partition(array, left, right);
        quicksortBad(array, left, division - 1);
        quicksortBad(array, division + 1, right);
    }
}

int quicksortBad::bad_partition(int *array, int left, int right)
{
    int pivotIndx = left;
    int pivotValue = array[pivotIndx];
    swap(array[pivotIndx], array[right]);
    pivotIndx = left;
    
    for(int i = left; i < right; i++)
    {
        if(array[i] < pivotValue)
        {
            swap(array[i], array[pivotIndx]);
            pivotIndx++;
        }
    }
    swap(array[pivotIndx], array[right]);
    return pivotIndx;
}
