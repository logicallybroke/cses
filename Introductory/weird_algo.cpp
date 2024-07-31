#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
    cin>>n;
    cout<<n<<" ";
    while(n>1){
        
        if((n&1) == 0) 
            n = n/2;
        else 
            n = n*3 + 1;

        cout<<n<<" ";
    }


}