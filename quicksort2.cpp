#include "quicksort2.h"

void qsort2(std::vector<int>& vec, int low, int high){
    if(high - low < 1 || low < 0 || high > vec.size())
        return;

    int pivotIndex = median(vec, low, (int)((low + high)/2), high);
    int pivotElement = vec[pivotIndex];
    int count = low;

    for(int i = low; i <= high; i++){
        if(vec[i] < pivotElement){
            if(vec[count] == pivotElement)
                pivotIndex = i;
            swap(vec, count, i);
            count++;
        }
    }

    swap(vec, count, pivotIndex);
    
    qsort2(vec, low, count - 1);
    qsort2(vec, count + 1, high);
}

void print(std::vector<int>& vec){
    for(int x = 0; x < vec.size(); x++){
        std::cout << vec[x] << " ";
    }
    std::cout << std::endl;
}

//Returns the index of the medium element between vec[x], vec[y], and vec[z]
int median(std::vector<int>& vec, int x, int y, int z){
    if((vec[y] <= vec[x] && vec[x] <= vec[z]) || (vec[z] <= vec[x] && vec[x] <= vec[y]))
        return x;
    else if((vec[x] <= vec[y] && vec[y] <= vec[z]) || (vec[z] <= vec[y] && vec[y] <= vec[x]))
        return y;
    else if((vec[y] <= vec[z] && vec[z] <= vec[x]) || (vec[x] <= vec[z] && vec[z] <= vec[y]))
        return z;
    return -1;
}

void swap(std::vector<int>& v, int low, int index){
    int tmp = v[low];
    v[low] = v[index];
    v[index] = tmp;
}