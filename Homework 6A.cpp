#include <iostream>
using namespace std;

int main(void) {
   int data[] = {1,3,6,7,9};
   int data1[] = {5,3,3,11};
   int dataN;
   for(int i = 0;i<5;i++){
      dataN = data[i];
      data[i] = data1[i];
      data1[i] = dataN;
   }
   
   cout<<"Content of data: ";
   for(int i = 0;i<5;i++){
      cout<<data[i]<<" ";
   }
   cout<<endl;
   
   cout<<"Content of data1: ";
   for(int i = 0;i<5;i++){
      cout<<data1[i]<<" ";
   }
   cout<<endl;
   
       return 0;
}