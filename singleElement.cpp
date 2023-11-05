#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int detectSingleElement(vector<int> arr) {
	if(arr.size()==1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[arr.size()-1] != arr[arr.size()-2]) return arr[arr.size()-1];

	int low = 1, high = arr.size()-2;
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];
		else if(((mid%2==1) & arr[mid]==arr[mid-1]) | ((mid%2==0) & arr[mid]==arr[mid+1])) low = mid+1;
		else high = mid-1;
	}
}


int main () {
	vector<int> arr = {2 ,2, 3, 3, 19, 19, 24, 24, 25, 27, 27, 28, 28, 29, 29, 33, 33};
  cout<<"the single element is "<<detectSingleElement(arr)<<"\n";
  return 0;
}