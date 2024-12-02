#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+2; j++){
            if(j==0){
                cout<<j+1<<" ";
            }else if(i==n-1){
                if(j<n){
                    cout<<j+1<<" ";
                }
            }else{
                if(j!=i+1){
                    cout<<" ";
                }else{
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

// xxxxxxxxxxxxxxxxxxxxx