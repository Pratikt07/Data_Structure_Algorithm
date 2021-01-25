#include<iostream>
using namespace std;

struct mystruct
{
int *k;
};
int main()
{
int num=200;
mystruct *ptr=new mystruct;
ptr->k=&num; //here
// getch();
cout<<*(*ptr).k<<endl;
cout<<*ptr->k<<endl;
}
