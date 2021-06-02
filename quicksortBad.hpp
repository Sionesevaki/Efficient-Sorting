//
//  quicksortBad.hpp
//  efficient_sorting
//
//  Created by Sione on 3/12/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef quicksortBad_hpp
#define quicksortBad_hpp

#include <stdio.h>
#include <string>

using namespace std;

class quicksortBad
{
public:
    quicksortBad(int array[], int left, int right);
    int bad_partition(int *array, int left, int right);
};

#endif /* quicksortBad_hpp */
