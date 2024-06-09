#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

int NOD(int n){
    int nod=1;

    for(auto p:primes){
        if(1LL*p*p>n) break;

        if(n%p==0){
            int cnt=0;
            while(n%p==0){
                n/=p;
                cnt++;
            }
            cnt++;
            nod*=cnt;
        }
    }

    if(n>1){
        nod*=2;
    }

    return nod;
}

int main(){
    optimize();

    int lim=1e6;
    PrimeGen(lim);

    int n;
    cin>>n;
    cout<<NOD(n)<<endl;

     return 0;
}



