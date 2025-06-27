#include<bits/stdc++.h>
using namespace std;

  bool isCovered(vector<vector<int>>& ranges, int left, int right) {
	for(int i = left; i <= right; i++) {
		bool found = false;

		for(int j = 0; j <ranges.size() && !found; j++) 
			if(i >= ranges[j][0] && i <= ranges[j][1]) {
				found = true;
            }
        if(found == false) {
            return false;
        }
	}
	return true;
}

int main(){
    vector<vector<int>> ranges={{1,2},{3,4},{5,6}};
    int l=2,r=5;
    cout<<isCovered(ranges,l,r);
}