/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    
    int low, high, middle;
    low = 0;
    high = n;
    
    while (low <= high)
    {
        middle = (low + high) / 2;
        
        if (value < values[middle]){
            high = middle - 1;
            
        }
        else if (value > values[middle]){
            low = middle + 1;
            
        }
        else{ 
            return true;
        }
         
    }
    // TODO: implement a searching algorithm
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int tmp;
    
    for (int i = 0; i < n; i++){
        
        for (int j = n - 1; j >= i; --j){
            
            if (values[n - 1] > values[n]){
                
                tmp = values[n - 1];
                values[n - 1] = values[n];
                values[n] = tmp;
            }
        }
    }
    return;
}