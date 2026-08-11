class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x;
        int long long rev = 0;

        while (x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return original == rev;
    }
};

//or



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value for n"<<endl;
    cin>>n;
    if(n<0){
        cout<<"false"<<endl;
        
    }
    int original=n;
    int rev=0;
    int ans;
    int power = 10;
    while(n>0){
        ans= n%power;
        rev = rev*10+ ans;
        
        n=n/10;
       
        }
         if(rev==original){
        cout<<"True"<<endl;
        

    }
    else{
        cout<<"False"<<endl;
    }

}