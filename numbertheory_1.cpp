#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int const mx=1e7+123;
int cnt[mx];

int main(){
    optimize();

    int lim=10;
    for(int i=1;i<=10;i++){
        for(int j=i;j<=10;j+=i){
            cnt[j]++;
        }
    }

    for(int i=1;i<=lim;i++){
        cout<<i<<" "<<cnt[i]<<endl;
    }

     return 0;
}

