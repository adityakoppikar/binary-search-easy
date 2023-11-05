#include<iostream>
#include<vector>
using namespace std;

int findLastOccurence(vector<int> arr, int key) {
	int low {0}, high = arr.size()-1;
	int lastOccurence = arr.size();
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid] == key) {
			lastOccurence = mid;
      if(mid < arr.size()-1) {
        if(arr[mid+1] != arr[mid]) return lastOccurence;
      }
      low = mid+1;
		} else if(arr[mid] < key)
			low = mid+1;
		else 
			high = mid-1;
	}
	return lastOccurence;
}

int main () {

  vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
  int key {2};
	cout<<"element "<<key<<" last occured at index "<<findLastOccurence(arr, key)<<endl;
  return 0;
}