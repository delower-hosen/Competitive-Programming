#include<bits/stdc++.h>
using namespace std;
int main()
{
    double AB,AC,BC,AE,AD,DE,DB,EC,r,low,high;
    int tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
    scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&r);
    low=0.0;
    high=AB;
    while(high-low>=0.0000001){
        AD=(low+high)/2.0;
        AE=(AD*AC)/AB;
        DE=(AD*BC)/AB;
        DB=AB-AD;
        EC=AC-AE;
        double perim=(AD+DE+AE)/2.0;
        double areaOFtriangle=sqrt(perim*(perim-AD)*(perim-DE)*(perim-AE));
        double x=((DB*DB)-(EC*EC)+((BC-DE)*(BC-DE)))/(2.0*(BC-DE));
        double h=sqrt((DB*DB)-(x*x));
        double areaOFtrap=h*((DE+BC)/2.0);
        double R=areaOFtriangle/areaOFtrap;
        if(R>r)high=AD;
        else low=AD;
    }
    printf("Case %d: %f\n",++cs,AD);
    }
    return 0;
}
