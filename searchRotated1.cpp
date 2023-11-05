#include<iostream>
#include<vector>
using namespace std;

int searchRotatedSorted(vector<int> arr, int key) {
  int low = {0};
  int high = arr.size()-1;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[mid] == key)return mid;
    else if(arr[low] <= arr[mid]) {
      if(key>=arr[low] && key<arr[mid]) 
        high = mid-1;
      else
        low = mid+1;
      }
    else {
      if(key>arr[mid] && key<=arr[high]) 
        low = mid+1;
      else  
        high = mid-1;
      
    }
}
}

int main () {

  vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
  int key {4};
	cout<<"the element "<<key<<" found at index: "<<searchRotatedSorted(arr, key)<<endl;
  return 0;
}