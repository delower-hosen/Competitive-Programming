#include<bits/stdc++.h>
using namespace std;
struct info{
    int l,r,c;
}arr[100005];
bool cmp(info x,info y){
    return x.c<y.c;
}
int main()
{
    int n,x;
    vector<int>v;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i].l>>arr[i].r>>arr[i].c;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
       v.push_back(arr[i].c);
    }
    auto up=upper_bound(v.begin(),v.end(),x);
    for(int i=0;i<up-v.begin();i++){
        for(int j=i+1;j<up-v.begin();j++){
            if((arr[i].r<arr[j].l || arr[j].r<arr[i].l)&&(arr[i].c+arr[j].c==x)){
                cout<<(arr[i].r-arr[i].l)+(arr[j].r-arr[j].l)+2<<endl; return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
