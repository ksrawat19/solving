#include <iostream>
using namespace std;

int recursion(int n){
    if(n==0 || n==1){
        return 1;
    }
    int ans = n* recursion(n-1);
    return ans;
}

int iteration(int &n){
    int ans = -1;
    if(n>=0){
        ans = 1;
    }
    if(n>0){
        for(int i=n; i>0; i--){
            ans *= i;
        }
    }
    return ans;
}

int main(){
    int n = 0;
    cin>>n;
    
    // cout<<n<<"! is equal to "<<iteration(n)<<endl;
    cout<<n<<"! is equal to "<<recursion(n)<<endl;

    return 0;
}
