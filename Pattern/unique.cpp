#include <iostream>
using namespace std;
int main()
{
    int a[7]={1,2,3,4,3,2,1};
    int ans =0;
    for(int i=0;i<7;i++){
        ans=ans^a[i];
    }
    cout<<ans;
    return 0;
}