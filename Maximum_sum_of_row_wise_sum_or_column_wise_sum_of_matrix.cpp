#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r>> c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a[i][j];
        }
    }
    int rs=0,cs=0,m1=0,m2=0;
    for(int i=0;i<c;i++)
    {
        cs=0;
        for(int j=0;j<r;j++)
        {
            cs+=a[j][i];
        }
        m1=max(cs,m1);
    }
    for(int i=0;i<r;i++)
    {
        rs=0;
        for(int j=0;j<c;j++)
        {
            rs+=a[i][j];
        }
        m2=max(rs,m2);
    }
    cout << max(m1,m2);
}