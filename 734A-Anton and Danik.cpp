/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.01.18 01:42am
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n, cntA = 0, cntD = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i <= n; i++)
    {
        if(s[i] == 'A') ++cntA;
        else if(s[i] == 'D') ++cntD;
    }
    if(cntA == cntD) cout << "Friendship" << endl;
    else if(cntA > cntD) cout << "Anton" << endl;
    else if(cntD > cntA) cout << "Danik" << endl;
    return 0;
}
