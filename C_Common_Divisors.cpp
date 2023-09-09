//https://codeforces.com/problemset/problem/1203/C
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
#define endl '\n'
long long gcd(long long a , long long b){
    //b is smaller
    if(b==0)return a;
 
    return gcd(b,a%b);
}
 
 
long long num_of_factors(long long a){
    //non squared nummber
    //vector<long long>fac;
    long long ans=0;
   for(long long i=1;i*i<=a;i++){
    if(i*i==a){
        //fac.push_back(i);
        ans++;
    }
    else{
    if(a%i==0){
       //fac.push_back(i);
       //fac.push_back(a/i);
       ans=ans+2;
    }
    }
   }
    
    return ans;
 
 
 
}
 
vector<int> prime_factors(int a){
    vector<int>primes;
    int b=a;
    for(int i=2;i*i<b;i++){
        if(a%i==0){
            primes.push_back(i);
            a=a/i;
        }
 
    }
    if(a!=1){
        primes.push_back(a);
    }
    return primes;
}
 
 
 
int32_t main() {
    int n;
    cin>>n;
    //vector<int>arr;
    
    long long gcd_1;
    cin>>gcd_1;
    for(int i=0;i<n-1;i++){
        long long a;
        cin>>a;
        gcd_1=gcd(gcd_1,a);
       // arr.push_back(a);
    }
    cout<<num_of_factors(gcd_1);
 
}