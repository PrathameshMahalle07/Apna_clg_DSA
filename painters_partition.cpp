#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool ispossible(vector<int>&arr, int n , int m, int mid){
    int painter=1 ; 
    int summ=0;
    for(int i=0 ; i<n ; i++){
        if(summ+arr[i]<=mid){
            summ=summ+arr[i];
        }else{
            painter++;
            summ=arr[i];

        }
    }return painter<=m;

}
int minTimeTopaint(vector<int>&arr, int n , int m){
    int sum=0 ; int maximum= INT_MIN;
    for(int i=0 ; i<n ; i++){
        sum = sum+arr[i];
        maximum = max(maximum , arr[i]);
    }
    int start = maximum ;
    int end= sum;
     int ans=-1;
    while(start<=end){
        int mid= start+ (end-start)/2;
        if(ispossible(arr, n , m , mid)){
           
            ans= mid;
            end=mid-1;
        }else{
            start= mid+1;
        }
    }return ans;

}
int main(){
    vector<int>arr={40, 30 , 10 , 20};
    int n=4, m=2;
    cout<<minTimeTopaint(arr, n , m)<<endl;
    return 0;
}
