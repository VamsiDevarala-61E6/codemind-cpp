#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a[i][j];
        }
    }
    int cs=0,m=0;
    for(int i=0;i<c;i++)
    {
        cs=0;
        for(int j=0;j<r;j++)
        {
            cs+=a[j][i];
        }
        m=max(cs,m);

    }
    cout << m;
}