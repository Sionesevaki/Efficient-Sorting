//
//  quicksort.cpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "quicksort.hpp"

quicksort::quicksort(int *array, int left, int right)
{
    if(left < right)
    {
        int division = partition(array, left, right);
        quicksort(array, left, division - 1);
        quicksort(array, division + 1, right);
    }
}

quicksort::quicksort(int *array, int size)
{
    quicksort(array, 0, size);
}


int quicksort::partition(int *array, int left, int right)
{
    int pivotIndx = (left+right)/2;
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


