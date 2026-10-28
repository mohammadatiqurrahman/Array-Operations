#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements before insert: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int pos,val;

    cin>>pos>>val;

    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos]=val;

    cout<<"Elements after insert: ";

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}