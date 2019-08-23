#include <iostream>
using namespace std;

int EvenOdd(int num, int n)
{
    if(num > n)
        return 0;
    cout<<num<<" ";
    EvenOdd(num+2, n);
}
 
int main()
{
    int n;
    cin>>n;
    
    cout<<"EVEN: ";
    EvenOdd(2, n);
    cout<<endl; 
    cout<<"ODD: ";
    EvenOdd(1, n);
     
    return 0;
}


