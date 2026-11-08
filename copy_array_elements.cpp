#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr_1[n];
    for(int i=0;i<n;i++){
        cin>>arr_1[i];
    }
    int m;
    cin>>m;
    int arr_2[m];
    for(int i=0;i<m;i++){
        cin>>arr_2[i];
    }
    int combined_array[n+m];
    for(int i=0;i<n;i++){
        combined_array[i]=arr_1[i];
    }
    int i = n;
    for(int j=0;j<m;j++){
        combined_array[i]=arr_2[j];
        i++;
    }
    for(int i=0;i<n+m;i++){
        cout<<combined_array[i]<<" ";
    }
    return 0;
}