
#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8};
    int *p = arr;  //arr decays to address of first elempnt

    for(int i = 0; i < 4; i++){
        cout<<"arr[ "<< i << "] ="<< *(p+i) <<endl;
    }
    return 0;
}