#include <iostream>
using namespace std;
int main()
{
     int x;
     cin>>x;
     int ans=0;
     while(x!=0){
        int digit=x%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
           cout <<"out of scope";
        return 0;
        }
        ans =10*ans +digit;
        x=x/10;
     }
     cout<<ans;
    return 0;
}