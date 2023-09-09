#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
#define endl '\n'
int gcd(int a , int b){


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
    for(int i=2;i*i<=b;i++){
        while(a%i==0){
            primes.push_back(i);
            a=a/i;
        }
 
    }
    if(a!=1){
        primes.push_back(a);
    }
    return primes;
}
vector<int>spf;
void seive (int n){
    spf.resize(n+1,0);
    for(int i=2;i<=n;i++){
        
        if(spf[i]==0){
        spf[i]=i;
        for(int j=i*i;j<=n;j=j+i){
                if(spf[j]==0){
                    spf[j]=i;
                }

        }

    }


}
}
 
int32_t main() {

int n,m;
cin>>n>>m;
map<int,bool>colliders;


while(m){
    if(colliders.size()==0){
        char ui;
        int ok;
        cin>>ui>>ok;
         cout<<ui<<"  "<<ok<<endl;
        colliders[ok]=1;
        cout<<"Success"<<endl;
        m--;
        continue;
    }
    
    char ch;
    int a;
    cin>>ch>>a;
    cout<<ch<<"  "<<a<<endl;
    if(ch=='+'){
        for(int i=0; i<colliders.size();i++){
                
             if(colliders[i]==1){
                   
                    cout<<"Already on"<<endl;
                    m--;
                    continue;
                }
        }

        for(pair<int,bool> i:colliders){
            


            if(i.second==1 && __gcd(i.first,a)==1){
                cout<<"Success"<<endl;
                colliders[a]=1;
            }else{
                if(i.second==1)cout<<"Conflict with "<<i.first<<endl;
                

            }
        }

    }else{  
            int flag=1;
            for(pair<int,bool>i : colliders){
                
                if(i.first==a && i.second==1){
                    //vector<int>::iterator itr = colliders.begin()+i;
                   i.second=0;
                    cout<<"Success"<<endl;
                    flag=0;
                }
            }
            if(flag==1){
                cout<<"Already off"<<endl;
            }



    }



    m--;
}
  
 
}