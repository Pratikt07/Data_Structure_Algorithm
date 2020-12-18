#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int  arr1[] = {10,12};
    int size= sizeof(arr1)/sizeof(arr1[0]);

    vector<int> arr2 = {5, 18,20};

    for(int i = 0; i <size;i++){
        arr2.push_back(arr1[i]);
    }

    sort(arr2.begin(),arr2.end());

    cout<<"Merged Array : "<<endl;

    for(int j=0;j<arr2.size();j++){
        cout<<" "<<arr2[j];
    }
    cout<<endl;
}