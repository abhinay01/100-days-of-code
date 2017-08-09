#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,i;
    int u=0,c=0,d=0,r=0;
    cin>>t;
    char a[t];
    for(i=0;i<t;i++)
    {
        cin >> a[i];
    }
    i=0;
    while(t>0)
    {
        if(c==0)
        {
            r++;
            if(a[i]=='U')
                u++;
            else
                d++;
        }
        if(a[i]=='U')
        {
            c++;
        }
        else
            c--;
        
        t--;
        i++;
    }
    cout<<(r-u);
    return 0;
}
