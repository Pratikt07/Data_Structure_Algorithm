#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr  = {3, 9, 12, 16, 20};
    int k=3;
    int size = arr.size();
    int minDiff = INT_MAX;
    sort(arr.begin(), arr.end());
    int i=0;
    //cout<<"min = "<<arr[0]<<" max = "<<arr[size-1]<<endl;
    int check1 = (arr[size-1]-k)-(arr[0]-k);
  //  cout<<" check1 = "<<check1<<endl;
    if(minDiff>check1){
        minDiff = check1;
    }
    int check2 = (arr[size-1]+k)-(arr[0]+k);
  // cout<<" check2 = "<<check2<<endl;
    if(minDiff>check2){
        minDiff = check2;
    }
    int check3 = (arr[size-1]-k)-(arr[0]+k);
   //cout<<" check3 = "<<check3<<endl;
    if(minDiff>check3){
        minDiff = check3;
    }
    int check4 = (arr[size-1]+k)-(arr[0]-k);
  //cout<<" check4 = "<<check4<<endl;
    if(minDiff>check4){
        minDiff = check4;
    }
    cout<<"Min Diff = "<<minDiff<<endl;
}

