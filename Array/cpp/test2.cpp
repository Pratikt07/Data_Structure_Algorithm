#include<iostream>
using namespace std;

class a{
    public:
    virtual void test(){
        cout<<"Testing"<<endl;
    }
    virtual void test1(){
        cout<<"Testing"<<endl;
    }

};
class b : a{
    
};
int  main()
{
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
}

