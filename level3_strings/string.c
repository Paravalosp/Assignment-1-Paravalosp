#include "string.h"
#include <stdlib.h>

// TODO: Document string.h

int get_string_length(char* s) {
    if (s == NULL)
        return -1;
    int i = 0;
    while(s[i] != '\0' ){
        i++;
    }   
    return i;
}

int string_copy(char* dest, char* s, int dest_size) {
    // TODO
    
    if(s == NULL || dest == NULL){
        return 0;
    }
    int j = 0;
    while(s[j] != '\0' ){
        j++;
    } 
    if (j == 0){
        return 0;
    }
    //greater than size
    int q = 0;
     


    if(j > dest_size -1){
        while (q < dest_size -1){
            dest[q] = s[q];
            q++;
            
        }
        return q;
    }
    else{
        while(q < j) {
            dest[q] = s[q];
            q++;
            dest[q+1] = '\0';
        }
        return q;
    }
    

    
}
     
    


    
    

