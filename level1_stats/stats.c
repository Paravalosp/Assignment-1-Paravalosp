#include "stats.h" // Include user header file
#include <stdlib.h> // For NULL

int find_greater(int array[], int array_len, int x) {
    //TODO
    if(array == NULL){
        return 0;
    }
    int count = 0;
    int i = 0;
    while(i <= array_len){
        if(array[i] > x)
            count+=1;
        i++;
    }
    return count;
    
}

float array_averages(int array[], int array_len) {
    //TODO
    if(array_len == 0){
        return 0.0;
    }
    if(array == NULL){
        return 0;
    }
    float total = 0;
    int i = 0;
    while(i < array_len){
        total += array[i];
        i++;
    }
    float avg = total/array_len; 
    return avg;
}
