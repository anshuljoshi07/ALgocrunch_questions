//

#include <bits/stdc++.h>
using namespace std;
#define int long long 



void difference_array(){
/*we'll look at a array whose prefix_sum array is given array A

A->2 3 5 7 9
constructed array (difference_array of A):- 2 1 2 2 2 

If we inc elements btw l,r by x in array what change will happen in diff array 
NOTE:- lth elemeent inc by x and rth term dec by x


2 4 6 7 9 
2 2 2 1 2


*/
}



void stl_stuff(){
 /*//st.upper_bound(x)->returns value higher than x // better than upperbound(st.begin......)
 //st.end() ->returns the location at right of last element in set
 //st.find()->returns a iterator so use * before it to access value
 //multiset.erase ()->preferred to send iterator bcz if value sent then all will be deleted
//st.count()
if(st.find(x)!=st.end){
    cout<<"WE FOUND"<<endl;
}

//in order to move iterator ahead or behind use ++itr or --itr instead of itr++ or itr--
always use if(mpp.find()!=mpp.end()) insted of mpp[x] to check value as mpp will assign value of 0 to values we just check if they exist or not
just checking from mpp gives it value as 0

//custom_comparators

//priority_queue ->stores highest element on top



*/
}



int binary_search_invariant(vector<int>arr, int condition){
    //first number greater than condition
    //We need to find first 1 
    int start=0;//points to all zeros
    int end =arr.size()-1;// points to all ones
    int mid = (start+end)/2;
    while(start+1<end){
         mid = (start+end)/2;
        cout<<start<<" "<<end<<endl;
        if(arr[mid]<=condition){
            //start can only point to 0's

            start=mid;
        }else{

            
            //end will only take values greater than condition
            end=mid;
            
        }
    
    
}

//note that if we wanted greater than equal to then start would be answer

//basically return value would be the only satusfying the condition


return end;
}


vector<int> merge_sort(vector<int>a){
    //base case
    int n = a.size();
   
    if(n==1){
        return a;
    }
    if(n==2){
        vector<int>ans(2);
        ans[0]=min(a[0],a[1]);
        ans[1]=max(a[0],a[1]);
        return ans;
    }

int size_1  = n/2;
int size_2 = n-n/2;

vector<int>a1;
vector<int>a2;
for(int i=0;i<n;i++){
    if(i<size_1){
    a1.push_back(a[i]);
    }else{
    a2.push_back(a[i]);
    }
}

a1 = merge_sort(a1);
a2 = merge_sort(a2);
vector<int>ans;
int i=0;
int j=0;
while(ans.size()!=n){
    if(i==size_1){
        ans.push_back(a2[j]);
        j++;
        continue;
    }
    if(j==size_2){
        ans.push_back(a1[i]);
        i++;
        continue;
    }
    if(a1[i]<=a2[j]){
        ans.push_back(a1[i]);
        i++;
        continue;
     }else{

        ans.push_back(a2[j]);
        j++;
        continue;

     }
    

}
return ans;


}


void generate_permutations(vector<int>arr, int n , int i){
//i represents that changes will not happen before ith index
if(i==n){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

for(int j=i+1;j<n;j++){
    swap(arr[i],arr[j]);
    generate_permutations(arr,n,i+1);
    swap(arr[i],arr[j]);


}
return;

}


void generate_combinations(vector<int>arr, int n , int i, vector<int>till_now){
// i represents the index of change

if(i==n){
if(till_now.size()==0){
    cout<<"EMPTY";
}
for(auto i: till_now){
    cout<<i<<" ";
}
cout<<endl;
return;
}

generate_combinations(arr,n,i+1,till_now);

till_now.push_back(arr[i]);

generate_combinations(arr,n,i+1,till_now);

return ;



}

int gcd(int a, int b){

    if(b==0)return a;

    return (b,a%b);

}

void generate_permutations_1(vector<int>arr, int n , int idx){
if(idx==n){
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
for(int j=idx;j<n;j++){
    swap(arr[idx],arr[j]);
    generate_permutations(arr,n,idx+1);
    swap(arr[idx],arr[j]);
}
}
vector<int>spf;

void seive(int n){
    spf.resize(n+1,0);
    for(int i=2;i<=n;i++){
        if(spf[i]==0){

                spf[i]=i;
                for(int j=i*i;j<=n;j=i+j){
                    spf[j]=i;
                }


        }
    }
}
vector<int> prime_factorisation (int a){
    vector<int>ans;
    
    while(a!=1){
        int y = spf[a];
        ans.push_back(y);
        a=a/y;
    }


}


int32_t main() {
  int n,k,q;
  cin>>n>>k>>q;

  vector<int>diff(200001,0);




  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    diff[a]+=1;
    diff[b+1]-=1;
  }
   vector<int>actual(200001,0);
   int sum=0;
   vector<int>v(200001,0);
   for(int i=1;i<200001;i++ ){
    sum+=diff[i];
    if(sum>=k){
    actual[i]=1;
    }
   }
   sum=0;
    for(int i=1;i<200001;i++){
        sum+=actual[i];
        v[i]=sum;
    }
   


for(int i=0;i<q;i++){
    int a,b;
    cin>>a>>b;
    int num=v[b]-v[a-1];
    // for(int j=a;j<=b;j++){
    //     //cout<<j<<" "<<actual[j]<<endl;
    //     if(actual[j]>=k){
    //         num++;
    //     }
    // }

    cout<<num<<endl;
}
//91 92 93 94 95 96 97 98 99 

//1  2  2  2  1  1  2  1  1
//

}