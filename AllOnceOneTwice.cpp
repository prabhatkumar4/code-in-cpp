#include <iostream>
using namespace std;
int main(){
    int n;
    int ans=0;

    cout<<"enter the value of n:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cout<<"enter the a[" <<i<<"] value:";
         cin>>a[i];
        

    }
    for(int i=0;i<n;i++){
        ans=ans^a[i];

    }
cout<<"Answer is:"<<ans;


return 0;
}
