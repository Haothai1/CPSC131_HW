#include<iostream>
#include "prototype.hpp"


using namespace std;


int main()
{
	// initialize vector variables to carry over data
	vector131<int> iArr;                        
    vector131<int> arr;
    

    for (size_t i = 0; i < arr.getNrOfE1();i++)     /* iterating loop for number of elements */
    {
        cout << i << ": " << arr.getAt(i) << endl;  /*  */
    }
    int size_array, size;

    cout << "Enter the size of the array: " << endl;
    cin >> size_array;
    
    

	iArr.push(size_array);

	for (size_t i = 0; i < iArr.size(); i++)
	{
		cout << iArr[i] << endl;
	}

	system("PAUSE");

	return 0;
}
