#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int p[n/2+1];
    int c=1;
    for(int i=1;i<=n/2+1;i++)
    {
    	
    	p[i]=c;
    	c=c+2;
	}
	int index=p/2+1;
	int bd=(n/2+1)-index;
	int fd=index-1;
	if(fd>bd)
	return bd;
	else
	return fd;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
