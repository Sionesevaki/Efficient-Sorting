//
//  main.cpp
//  efficient_sorting
//
//  Created by Sione on 26/11/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "quicksort.hpp"
#include "quicksortBad.hpp"
#include "maxheap.hpp"
#include "heapsort.hpp"

using namespace std;

string random_string(int length)
{
    string result = "";
    int set_size = '~' - '!' + 1;
    int base     = '!';
    for(int i = 0; i < length; i++){
        result += static_cast<char>(rand() % set_size + base);
    }
    return result;
}

int main(int argc, const char * argv[])
{
    
    std::chrono::high_resolution_clock::time_point  begin, end;
    std::chrono::duration<double>  elapsed_time;
    double elapsed_seconds1;
    double elapsed_seconds2;
    double elapsed_seconds3;
    
    int array1[100000];
    int array2[100000];
    int array3[100000];
    
    int i = 0;
    while(i < 100000)
    {
        int r = rand() % 1000;
        
        array1[i] = r;
        array2[i] = r;
        array3[i] = r;
        i++;
    }
   
//************ QUICKSORT ************************
    int arr1size = sizeof(array1)/sizeof(array1[0]);
    
    begin = std::chrono::high_resolution_clock::now();
    quicksort(array1, arr1size - 1);
    end   = std::chrono::high_resolution_clock::now();
    elapsed_time    = end - begin;
    elapsed_seconds1 = elapsed_time.count();
    
//************ QUICKSORT BAD ********************
    int arr3size = sizeof(array1)/sizeof(array1[0]);
    
    begin = std::chrono::high_resolution_clock::now();
    quicksortBad(array3, 0, arr3size - 1);
    end   = std::chrono::high_resolution_clock::now();
    elapsed_time    = end - begin;
    elapsed_seconds3 = elapsed_time.count();
    
//*************** HEAPSORT **********************
    int arr2size = sizeof(array1)/sizeof(array1[0]);
    
    begin = std::chrono::high_resolution_clock::now();
    heapSort(array2, arr2size);
    end   = std::chrono::high_resolution_clock::now();
    elapsed_time    = end - begin;
    elapsed_seconds2 = elapsed_time.count();
    
    
    
    
    cout << "SIZE: " << arr1size << "  -- HEAPSORT: " << elapsed_seconds2 << "seconds -- QUICKSORT: " << elapsed_seconds1 << "seconds -- QUICKSORTBAD: " << elapsed_seconds3 << "seconds" << endl;
    
    
}
