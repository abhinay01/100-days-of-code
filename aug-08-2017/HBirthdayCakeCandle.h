#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int i,max=0,c=0;
    max=ar[0];
    for(i=1;i<n;i++)
    {
        if(ar[i]>max)
            max=ar[i];
    }
    //cout<<max;
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)
            c++;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
