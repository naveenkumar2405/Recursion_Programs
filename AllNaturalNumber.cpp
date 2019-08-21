//print  all  natural  numbers  between  1  to  n  using  recursion

#include <iostream>
using namespace std;
 
int numAll(int n){
    if(n>= 1){
        numAll(n-1);
        cout<<n<<" ";
    }
}
 
int main(){
    int n;
    cin>>n;
     
    numAll(n);
 
    return 0;
}
 
