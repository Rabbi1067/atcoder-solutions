#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int found=0;
for(int i=0;i<n;i++){
    if(a[i]==a[i+1] && a[i+1]==a[i+2] ){
        found=1;
    }

}
if(found==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
return 0;
}
