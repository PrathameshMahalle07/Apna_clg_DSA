#include <iostream>
using namespace std ;
int main(){
    int stock[6]={7, 1,5,3,6,4};
    int maxprofit = 0;
    int bestbuy=stock[0];
    
    
    int current_profit;
    for(int i=1; i<6 ; i++){
       
        if(bestbuy>stock[i]){
            bestbuy=stock[i];
        }
        else{
            current_profit= stock[i]-bestbuy;
        }


        if(current_profit > maxprofit){
            maxprofit = current_profit;

        }
        
    }cout << maxprofit;
return 0;
}