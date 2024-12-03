// Count 0's and 1's in an array
#include <iostream>
using namespace std;

// counting zero's and one's
void countZerOne(int *arr, int _size){
    int zero = 0;
    int one = 0;

    for(int i=0; i<_size; i++){
        if(arr[i]==0){
            zero++;
        }else if(arr[i]==1){
            one++;
        }
    }
    cout<<"Zero's : "<<zero<<endl;
    cout<<"One's : "<<one<<endl;
}

int main(){
    int arr[] = {0, 1, 1, 1, 0, 1, 0, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    countZerOne(arr, size);

    return 0;
}