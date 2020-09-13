#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846
int main()
{
    double R,r,theta,n;
    int tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lf%lf",&R,&n);
        theta=(2*PI)/n;
        theta/=2.0;
        r=(R*sin(theta))/(1+sin(theta));
        printf("Case %d: %0.6f\n",++cs,r);
    }
    return 0;
}
