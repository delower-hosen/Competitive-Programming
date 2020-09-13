#include<bits/stdc++.h>
using namespace std;
struct T{
    int start_time,end_time;
}arr[100005];

bool cmp(T x,T y){
    return x.end_time<y.end_time;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);   //Number of Events
    for(i=0;i<n;i++){
        scanf("%d%d",&arr[i].start_time,&arr[i].end_time);
    }
    sort(arr,arr+n,cmp);
    int prev_end=-1,work_done=0;
    for(i=0;i<n;i++){
        if(arr[i].start_time>prev_end){
            work_done++;
            prev_end=arr[i].end_time;
        }
    }
    printf("%d\n",work_done);
    return 0;
}
