#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr= {2, 4, 1, 3, 5 };
    int max = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                max++;
            }
        }
    }
    cout<<"count Inversion = "<<max<<endl;
}