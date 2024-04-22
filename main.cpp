#include <iostream>

#define SIZE 10000

// count elements of matrix by lines
int countAlong(int* matrix);

// count elements of matrix by columns
int countAcross(int* matrix);


int main(){

    int* matrix = new int[SIZE * SIZE];

    for(int i = 0; i < SIZE * SIZE; ++i){
        matrix[i] = i;
    }
 
    for(int i = 0; i < 10; ++i){
        countAlong(matrix);    
    }
    countAcross(matrix);
    
    delete[] matrix;
  
    return 0;
}

int countAlong(int* matrix){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            sum += matrix[i * SIZE + j];
        }
    }
    return sum;
}


int countAcross(int* matrix){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            sum += matrix[j * SIZE + i];
        }
    }
    return sum;
}