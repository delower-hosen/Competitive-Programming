#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100000+10
#define PI 3.14159265358979323846
struct Point{
    ll x,y;
}P[mx],ans[mx];
Point Pivot;
ll orientation(Point p,Point q,Point r){
    return ((q.y-p.y)*(r.x-q.x))-((r.y-q.y)*(q.x-p.x));
}
ll dist(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
bool cmp(Point a,Point b){
    if(orientation(Pivot,a,b)==0)  //checking co-linearity
        return dist(Pivot,a)<dist(Pivot,b);  //if co-linear put nearest one

    ll slop1x=a.x-Pivot.x; ll slop1y=a.y-Pivot.y;
    ll slop2x=b.x-Pivot.x; ll slop2y=b.y-Pivot.y;
    return (atan2((double)slop1y,(double)slop1x)-atan2((double)slop2y,(double)slop2x))<0;
}
Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}
double ConvexHull(ll N){
    ll ymin=P[0].y,mn=0;
    for(int i=1;i<N;i++){  //Finding the bottom-most point
        if(P[i].y<ymin || (ymin==P[i].y && P[i].x<P[mn].x)){
            ymin=P[i].y; mn=i;
        }
    }
    swap(P[0],P[mn]);  //place the bottom-most point in the 1st position
    Pivot=P[0];
    sort(&P[1],P+N,cmp);
    ll m=1;
    for(int i=1;i<N;i++){
        while(i<N-1 && orientation(Pivot,P[i],P[i+1])==0) i++; //removing same angle points
        P[m++]=P[i];
    }
    //if(m<3) return; //Convex Hull is not possible

    stack<Point> S;
    S.push(P[0]);
    S.push(P[1]);
    S.push(P[2]);
    for(int i=3;i<m;i++){
        while (orientation(nextToTop(S),S.top(),P[i])>=0) //clockwise
         S.pop();
         S.push(P[i]);
    }
    int cnt=0;
    while(!S.empty()){
        Point p=S.top();
        ans[cnt++]=p;
        S.pop();
    }
    vector<Point>V;
    for(int i=cnt-1;i>=0;i--)V.push_back(ans[i]);
    int sz=V.size();
    double perim=0.0;
    V[sz]=V[0];
    for(int i=0;i<sz;i++){
        perim+=sqrt(dist(V[i],V[i+1]));
    }
    return perim;
}
int main()
{
    ll N,a,b,tc,cs=0;
    double d;
    scanf("%lld",&tc);
    while(tc--){
    scanf("%lld%lf",&N,&d);
    for(int i=0;i<N;i++){
        scanf("%lld%lld",&P[i].x,&P[i].y);
    }
    if(N<3){
        double h=2.0*sqrt(dist(P[0],P[1]));
        printf("Case %lld: %0.8f\n",++cs,((double)2.0*PI*d)+h);
    }
    else
    printf("Case %lld: %0.8f\n",++cs,ConvexHull(N)+((double)2.0*PI*d));
    }
    return 0;
}
