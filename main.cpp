#include "prototype.h"
#include <iostream>

using namespace std;


int main()
{
    vector131<int> vec;
    vec.push_back();

}

/* class IntArr
{
    private:
    int cap;                // Size of array
    int nrOfE1;             // Number of Elements
    int *arr;               // array pointer

    void initialize(int from)
    {
        for (size_t i = from; i < cap; i++)
        {
            arr[i] = 0;
        }
    }

    void expand()
    {
        cap *= 2;

        int *tempArr = new int [cap];

        for (size_t i = 0; i <nrOfE1; i++)
        {
            tempArr[i] = arr[i];
        }

        delete[] arr;

        arr = tempArr;

        initialize(nrOfE1);
    }

    
    public:
    IntArr()                // constructor
    {
        cap=10;
        nrOfE1 = 0;
        arr = new int [cap];
    }
    ~IntArr()               // destructor
    {
        delete[]arr;        
    }

    void add(int e1)       
    {
        if (nrOfE1 >= cap)
        {
            expand();
        }

        arr[nrOfE1++] = e1;
    }

    int getAt(int index)
    {
        if(index <0 || index >= nrOfE1)
        {
             throw("Out of bounds exception!");
        }
        return arr[index];
    }

    void popBack()
    {
        if (nrOfE1 > 0)
        {
            if (nrOfE1){
                arr[--nrOfE1] = 0; // Not Neccessary
            }
            else{
                throw("Empty array!");
            }
            

        }
    }   

    int getNrOfE1()
    {
        return nrOfE1; 
    }
};



int main()
{
    IntArr arr;
    int size_array, size;

    cout << "Enter the size of the array: " << endl;
    cin >> size_array;


    arr.add(size_array);
    

    for (size_t i = 0; i < arr.getNrOfE1();i++)
    {
        cout << i << ": " << arr.getAt(i) << endl;
    }

    system("PAUSE");

    return 0;
} */