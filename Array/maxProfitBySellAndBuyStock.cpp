#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> shares = {7,6,4,3,1};
    int maxProfit=0;
    int buy;
    int sell;
    for(int i=0;i<shares.size();i++){
        buy=shares[i];
        for(int j=i+1;j<shares.size();j++){
            sell=shares[j];
            if(maxProfit < (sell-buy) ){
                cout<<"buy = "<<buy<<" sell= "<<sell<<" maxprofit = "<<maxProfit<<endl;
                maxProfit = sell-buy;
            }
        }
    }
    cout<<"maximum profit = "<<maxProfit<<endl;
}