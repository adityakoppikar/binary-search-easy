#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int RotatedTimes (vector<int> arr) {
	int low {0}, high = arr.size();
	int minIndex=0;
	int minEle = INT_MAX;
	while (low<=high)
	{
		int mid = (low+high)/2;
		if(arr[low] <= arr[high]) {
			if(arr[low] < minEle) {
				minIndex = low;
				minEle = arr[low];
			}
			break;
		}
		if(arr[low] <= arr[mid]) {
			if(arr[low] < minEle){
				minIndex = low;
				minEle = arr[low];
			}
			low = mid+1;
		} else {
			high = mid-1;
			if(arr[mid] < minEle) {
				
      			minIndex = mid;
				minEle = arr[mid];
			}
		}
	}
	return minIndex;
}


int main () {
	vector<int> arr = {6, 7, 8, 1, 2, 3, 4, 5};
  

	cout<<"number of times the array rotated is "<<RotatedTimes(arr)<<"\n";
  
  	return 0;
}