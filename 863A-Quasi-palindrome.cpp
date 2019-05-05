#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b = 0, c = 0;
    cin >> a;
    while(a % 10 == 0)
    {
        a /= 10;
    }
    c = a;
    while(a != 0)
    {
        b = (a%10) + (b*10);
        a /= 10;
    }
    cout << ((b == c)? "YES":"NO" )<< endl;
    return 0;
}
