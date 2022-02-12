#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s = "";

    cin>> n ;


    for(int i=0; i<200000/4; i++)
    {
       s += "aa";
       s +=  "bb";

    }

    cout<<s.substr(0,n)<<endl;


return 0;

}
