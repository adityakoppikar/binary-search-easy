#include<iostream>
#include<vector>
using namespace std;

int findLowerBound(vector<int> arr, int key) {
  int lowerBound = arr.size();
  int low {0}, high = arr.size()-1;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[mid] >= key) {
      lowerBound = mid;
      high = mid-1;
    } else {
      low = mid+1;
    }
    
  }
  return lowerBound;
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
    int lowerBound = findLowerBound(arr, key);
    cout<<"lower bound of the given array is: "<<lowerBound<<endl;
    return 0;
}