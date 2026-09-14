#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[10][10],mx[10][10],need[10][10];
    int av[10],f[10]={0},s[10],k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
            for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>mx[i][j];
            need[i][j]=mx[i][j]-a[i][j];
        }
        for(int j=0;j<m;j++)
        cin>>av[j];
        while(k<n){
        bool found=false;
        for(int i=0;i<n;i++)
            if(!f[i]){
            bool ok=true;
        for(int j=0;j<m;j++)
            if(need[i][j]>av[j])
            ok=false;
            if(ok){
        for(int j=0;j<m;j++)
            av[j]+=a[i][j];
            s[k++]=i;
            f[i]=1;
            found=true;
            }
        }
        if(!found){
            cout<<"Unsafe state";
            return 0;
        }
    }
    cout<<"Safe sequence: ";
    for(int i=0;i<n;i++)
        cout<<"P"<<s[i]<<" ";
}