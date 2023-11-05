#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int> arr) {
  if(arr[0] > arr[1])return arr[0];
  if(arr[arr.size()-1] > arr[arr.size()-2]) return arr[arr.size()-1];
  int low = 1, high = arr.size()-2;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[mid-1]<arr[mid] && arr[mid] > arr[mid+1]) return arr[mid];
    else if(arr[mid] > arr[mid-1])
      low = mid+1;
    else 
      high = mid-1;
  }
}

int main() {
  vector<int> arr = {1, 10, 13, 7, 6, 5, 4, 2, 1, 0};
  int peak = findPeakElement(arr);
  cout<<"peak element is : "<<peak<<endl;
  return 0;
}