#include <bits/stdc++.h>
using namespace std;
#define int long long 

//void graphs algos 










void dynamic_programming_2(){
/*
455/A
1498/C







*/



}







void dynamic_programming_1(){

/*
Dp is technique which allows to avoid repetitive computation

We try to compensate the lesser time by taking a bit more space 

Questions:- find min sum in 2d grid going down or right only
Questions :- In a given array with positive and negative terms find subsequence where sum is max (2 methods)
Method1 :- dp[i][0]->max sum with ith element included and dp[i][1]-> max sum without including ith element 
Method2:- dp[i]->stores max sum till i irrespective of we include or not {
    transition --->>

    dp[i]=  max(arr[i]+dp[i+2], dp[i+1]);
}

Time complexity :- Number of states * transition time for each state
Space :- number of states* space required for each state





*/



}







void greedy_3(){

/*

JOB seq Problem 

Given an array of jobs where every job has a deadline and associated profit
 if the job is finished before the deadline. It is also given that every job
  takes a single unit of time, so the minimum possible deadline for any job is 1.
   Maximize the total profit if only one job can be scheduled at a time.

Examples: 

Input:  Five Jobs with following deadlines and profits

JobID   Deadline  Profit

  a            2          100
  b            1          19
  c            2          27
 d            1          25
 e            3          15

Output: Following is maximum profit sequence of jobs: c, a, e
SOlution:-
sort on basis of profit and place the highest profit position on rightmost possoible position 






*/



}



void greedy_2(){
/*

ACTIVITY SELECTION PROBLEM

You are given n activities with their start and finish times. Select the maximum 
number of activities that can be performed by a single person, assuming that a 
person can only work on a single activity at a time. 

Examples:  

Input: start[]  =  {10, 12, 20}, finish[] =  {20, 25, 30}
Output: 0 2

sort the finish time and then iterate over finish times each time check the start time to see 
if this current event can take place considering prev event

*/


}



void greedy_1(){
    /*
    FRACTIONAL KNAPSACK PROBLEM
    Given the weights and profits of N items, in the form of {profit, weight} put these items 
    in a knapsack of capacity W to get the maximum total profit in the knapsack. In Fractional 
    Knapsack, we can break items for maximizing the total value of the knapsack.

    Input: arr[] = {{60, 10}, {100, 20}, {120, 30}}, W = 50
    Output: 240 
    
    Solution :- Try to find the profit/per wight metric and sort it accordingly ad then place the items in 
    decreasing order
    */
}
void greedy(){

/*
Basic workflow 
1)Initialization:- start with empty solution
2)Selection:- choose the best option
3)


work well where locally optiomal 
solution at each step leads to globally optimal solution




*/




}




vector<int> prefix_sum(vector<int>a){
    int sum=0;
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        ans.push_back(sum);

    }
    return ans;
}

void difference_array(){
/*we'll look at a array whose prefix_sum array is given array A

A->2 3 5 7 9
constructed array (difference_array of A):- 2 1 2 2 2 

If we inc elements btw l,r by x in array what change will happen in diff array 
NOTE:- lth elemeent inc by x and rth term dec by x

imagine this to be orignal array whose A as above but its 2nd and 3rd elements are inc 2 4 6 7 9 

observe the changes in difference array :-2 2 2 1 2
changes are :- A[l]+=1; A[r+1]-=1;

Example code :-

here btw range a and b is admissible values 

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
    actual[i]=1;
   }

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
    // Write C++ code here
 // cout<<binary_search_invariant({2,4,5,7,8,10,20,34},25);
 vector<int>arr = {2,4,5,7,8,10,20,34};
  cout<<*lower_bound(arr.begin(),arr.end(),20);

}