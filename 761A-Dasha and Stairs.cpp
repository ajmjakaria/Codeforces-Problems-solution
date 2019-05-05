/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.02.18
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    if((a==0 && b==0)|| abs(a-b)>1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
