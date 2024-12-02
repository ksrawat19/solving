#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int ans = -1;
    if(a>b && a>c){
        ans = a;
    }
    else if(b>a && b>c){
        ans = b;
    }
    else ans = c;

    cout<<ans<<endl;

    return 0;
}