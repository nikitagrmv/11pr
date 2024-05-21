

#include <iostream>
#include <math.h>
using namespace std;

template <typename T> 
T srGeom(T* arr, int size) {
    if (size <= 0) {
        return 0; 
    }

    T a = 1;
    for (int i = 0; i < size; ++i) {
        a *= arr[i];
    }

    return pow(a, 1.0 / size); 
}

template <typename T>
T sumKv(T* arr, int size) {
    if (size <= 0) {
        return 0;
    }
     
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += pow(arr[i], 2);
    }

    return sum;
}


int main()
{
    int intArr[] = { 1, 2, 3, 4, 5 };
    double doubleArr[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };

    std::cout  << sumKv(intArr, sizeof(intArr) / sizeof(intArr[0])) << endl;
    std::cout <<  srGeom(doubleArr, sizeof(doubleArr) / sizeof(doubleArr[0])) << endl;
    
}

