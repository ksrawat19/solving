#include <iostream>
using namespace std;

int main(){
    int n = 6;

    int number = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<number++<<" ";
        }
        cout<<endl;
    }
    return 0;
}