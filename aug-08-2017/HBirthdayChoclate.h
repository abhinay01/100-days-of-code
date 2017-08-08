#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int i,j,sum=0,r=0,c=0;
    for(i=0;i<=n-m;i++)
    {
        r=i;
        for(j=m;j>0;j--)
        {
            sum=sum+s[r];
            r++;
        }
            if(sum==d)
            {
                c++;
            }
        r=0;
        sum=0;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
