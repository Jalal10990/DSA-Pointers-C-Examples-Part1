
#include<iostream>
using namespace std;

int main(){

    int arr[3] = {3, 5, 7};
    int *p = arr; //decays first element

    for(int i = 0; i < 3; i++){
     *(p + i) = *(p + i) * 10;
     //multiply each value by 10

    }
    for(int i = 0; i < 3; i++){
        cout<< arr[i]<<" ";   //now aaray changed
    }
}