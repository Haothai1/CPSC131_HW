#include <iostream>
using namespace std;

class vector131{
    private:
    int cap;
    int nrOfE1;
    int *arr;

    void initialize(int from)
    {
        for (size_t = from; i < cap; i++)
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

    void initialize(int from)
    {
        for (size_t i = from; i < cap; i++)
        {
            arr[i] = 0;
        }
    }
    public:
    IntArr()
    {
        cap=10;
        nrOfE1 = 0;
        arr = new int [cap];
    }

    ~IntArr()
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

    void getAt(int index)
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
};



int main(){
    IntArr arr;
    arr.add(10);

    cout << arr.getAt(0) << endl;

    return 0;
}