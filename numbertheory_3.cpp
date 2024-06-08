#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int const mx=1e7+123;
bitset<mx>isprime;
vector<int>primes;

void PrimeGen(int n){

  for(int i=3;i<=n;i+=2) isprime[i]=1;

  int sq=sqrt(n);
  for(int i=3;i<=sq;i+=2){
    if(isprime[i]){
        for(int j=i*i;j<=n;j+=i){
            isprime[j]=0;
        }
    }
  }

  primes.push_back(2);
  for(int i=3;i<=n;i+=2){
    if(isprime[i]==1){
        primes.push_back(i);
    }
  }

}

int main(){
    optimize();

    int lim=20;
    PrimeGen(lim);
    for(auto u:primes){
        cout<<u<<endl;
    }

     return 0;
}


