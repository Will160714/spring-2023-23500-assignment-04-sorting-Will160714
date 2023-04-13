#include <iostream>
#include "quicksort2.h"

int main(){
    std::vector<int> test = {10,1,3,0, -1, 100, 4,2}; //Size = 5
    std::cout << "Original" << std::endl;
    print(test);

    std::cout << std::endl;
    qsort2(test, 0, test.size() - 1);
    std::cout << "Sorted" << std::endl;
    print(test);

    return 0;
}

