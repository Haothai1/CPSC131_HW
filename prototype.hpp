#include <iostream>
#include <vector>

#ifndef PROTOTYPE_H     /* Checks if the code is included in the source file */
#define PROTOTYPE_H     /* Used if we have not include the code in the file */
#pragma once


template <typename T>
class vector131{
    private:
        int cap;            /* capacity of array */
        int size_Array;     
        

    public:
        T **arr;
        vector131(int size = 5);
        ~vector131();

        void initialize(int from);
        void expand();
        void push(const T&element);
        const int& size()const {return this->nrOfEl; }
        T& operator[] (const int index);
};

#endif


