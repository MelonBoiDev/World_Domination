#include <iostream>
#include "lib.hpp"

bool compareDoubles(const double a, const double b);

int main(int arc, char** argv){
    double* data;
    data = new double[100];

    for(int i = 0; i<100; ++i){
        data[i] = rand()%1000;
    }


    for(int i = 0; i<100; ++i){
        std::cout<<data[i]<<' ';
    }
    std::cout<<std::endl;

    quickSort(data, 0, 99, compareDoubles);

    for(int i = 0; i<100; ++i){
        std::cout<<data[i]<<' ';
    }
    std::cout<<std::endl;

    delete[] data;

    return 0;
}

bool compareDoubles(const double a, const double b){
    return a<b;
}