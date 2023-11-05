#include<iostream>
#include<vector>
using namespace std;

int findUpperBound(vector<int> arr, int key) {
  int upperBound = arr.size();
  int low {0}, high = arr.size()-1;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[mid] > key) {
      upperBound = mid;
      high = mid-1;
    } else {
      low = mid+1;
    }
    
  }
  return upperBound;
}

int main () {
   int n;
    vector<int> arr;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0; i<n; i++) {
        int data;
        cin>>data;
        arr.push_back(data);
    }
    int upperBound = findUpperBound(arr, key);
    cout<<"upper bound of the given array is: "<<upperBound<<endl;
    return 0;
}