#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int bubble_sort(vector<int>& data){
	int count{};
	bool hasSwapped{};
	do{
		hasSwapped = false;
		for(int i = 1; i < data.size(); ++i){
			if(data[i] < data[i - 1]){
				int temp = data[i];
				data[i] = data[i - 1];
				data[i - 1] = temp;
				hasSwapped = true;
				count++;
			}
		}
	}while(hasSwapped == true);
	return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

	cout << "Array is sorted in " << bubble_sort(a) << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[a.size() - 1] << endl;


    return 0;
}
