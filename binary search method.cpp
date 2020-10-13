#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int x){
    int size = arr.size();
    //sort(arr.begin(), arr.end());
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarySearch(arr,x);
}
   int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr[i]=(arr[i]*arr[i]);
        sort(arr.begin(), arr.begin()+i);
        
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    
}
