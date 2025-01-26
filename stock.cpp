#include <iostream>
#include <vector>
using namespace std;
//buy and sell stock
//best buy voh dinn hoga jab hum sbse kam price pe stock kharidenge
//max profit voh hai jab hum sbse jyada price pe stock-humne joh price pe buy kiya
int maxprofit(vector <int> prices){ 
    int best_buy = prices[0];
    int max_profit = 0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]>best_buy){//yadi price best nuy se jyada hai toh hi profit hoga
            max_profit=max(max_profit,prices[i]-max_profit);
        }
        best_buy=min(best_buy,prices[i]);
    }
    return best_buy;
}

int main(){
    vector <int> price={7,2,5,3,6,4};
    int answer= maxprofit(price);
    cout << answer;
    return 0;
}