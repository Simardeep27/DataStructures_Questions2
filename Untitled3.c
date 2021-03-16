#include <iostream>

using namespace std;
int main(){

int a[1000];
int n,key;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter the key"<<endl;
cin >> key;
for(i=0;i<n;i++){
    if(a[i]==key){
        cout<<"Key found at "<<i<<" index";
    }
}
if(i==n){
    cout<<"Key not in array";
}
}

