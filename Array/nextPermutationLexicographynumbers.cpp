#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {8,7,6,5,4};
    int n=arr.size(),i,j;
    for( i=n-2;i>0;i--){
        cout<<"arr[i]start = "<<arr[i]<<" arr[i+1]strat = "<<arr[i+1]<<endl;
        if(arr[i]<arr[i+1]){
            break;
        }

    }
    cout<<"i= "<<i<<endl;
    if(i<0){
        reverse(arr.begin(),arr.end());
    }
    else{
        for(j=n-1;j>0;j--){
            cout<<"arr[j]start = "<<arr[j]<<" arr[i]strat = "<<arr[i]<<endl;
            if(arr[j] > arr[i]){
                break;
            }
        }
        cout<<"arr[j]swap = "<<arr[j]<<" arr[i]swap = "<<arr[i]<<endl;
        swap(arr[i],arr[j]);
        reverse(arr.begin()+i+1,arr.end());

        for(int i=0;i<arr.size();i++){
            cout<<" "<<arr[i];
        }
    }

}