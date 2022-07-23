#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128

void our_array(int* array, int size_array){
    int index = 0;

    while(index < size_array){
        if(array[index] > '\0'){
            printf("%c:%d\n",index,array[index]);
        
        }
        
        index += 1;
    }
}


void tull_array(int* array, char* str){
    int index = 0;
    while(str[index] != '\0'){
        if(str[index] != '"'){
            array[(int)str[index]] +=1;

        }
        
        index +=1;
    }


}



int main(int rv, char **wc){
    int index = 1;
    int array[MAX_ARRAY_SIZE] ={0};
    while(index < rv ){
        tull_array(&array[0],wc[index]);
        index+=1;
    }
    our_array(&array[0],MAX_ARRAY_SIZE);




    return EXIT_SUCCESS;

}