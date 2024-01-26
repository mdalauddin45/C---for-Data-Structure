#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    cin>>h>>m;
    if(h == 12) h = 0;
    if(m == 60) m = 0;
    double hAngle = 0.5*((60 * h) + m);
    double mAngle = 6 * m;
    double ret = abs(hAngle - mAngle);
    double ans =  min(360 - ret, ret);
    cout.precision(7);
    cout << fixed << ans << endl;
    return 0;
}