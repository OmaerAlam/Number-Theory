#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int const mx=1e5+123;
vector<int>divisors[mx];

int main(){
    optimize();

    int lim=10;
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            divisors[j].push_back(i);
        }
    }

    for(int i=1;i<=lim;i++){
        cout<<i<<" : ";
        for(auto u:divisors[i]) cout<<u<<" ";
        cout<<endl;
    }

     return 0;
}

