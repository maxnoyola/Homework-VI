#include <iostream>
using namespace std;

// I found online the usage of a nested loop to find common elements in a program so I wanted to give it a try
void findCommon(int arr1[], int size1, int arr2[], int size2) 
    { cout << "Common numbers: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; 
            
        }
    }
    cout << endl;
}
    }
int main() 
// Here is my main function 
  {  int data[] = {1, 3, 6, 7, 9}; // array 
    int data1[] = {5, 3, 3, 11};   // array

    int size1 = sizeof(data) / sizeof(data[0]);
    int size2 = sizeof(data1) / sizeof(data1[0]);

    findCommon(data, size1, data1, size2);

    return 0;
  }
