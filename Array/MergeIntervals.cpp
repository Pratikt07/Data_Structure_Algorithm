#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].*/

int main(){

    vector<vector<int>> cells = {{1,3},{2,6},{8,10},{15,18}};

    for(int i=0;i<cells.size()-1;i++){
        
        if(cells[i][1]>=cells[i+1][0]){
            
                cells[i][1]= cells[i+1][1];
                cells.erase(cells.begin()+i+1);
        }
    }
    cout<<"{ ";
    for(int i=0;i<cells.size();i++){
        cout<<" {";
        for(int j=0;j<cells[i].size();j++){
            
            cout << cells[i][j] ;
            if(j==cells[i].size()-1){
                cout<<" ";
            }else{
                cout<<" , ";
            }
       }
       if(i==cells.size()-1){
           cout<<" } ";
       }else{
            cout<<"}, ";
       }
      
    }
    cout<<" }";


}
