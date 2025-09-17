
// Print values of array using pointer

#include<iostream>
using namespace std;

int main(){
    int numbers[3] = {10, 20, 30};
    int *ptr = numbers;   //pointers to first element

    for(int i = 0; i < 3; i++){
        cout << "Value at index " << i << " = " << *(ptr + i) <<" = "<<(ptr + i)<< endl;
    }
    return 0;
}