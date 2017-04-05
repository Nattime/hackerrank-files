/*
	coded and authored by Jie Huang on May 24, 2016
	day 10 daily challenge
*/

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


int main(){
    int n;
    cin >> n;

	vector<int> bin;

	for(int i = n; i != 0; i /= 2){
		int rem = i % 2;
		bin.push_back(rem);
		cout << rem;
	}

	int finalCount{}, currentCount{};
	for(int i = 0; i < bin.size(); ++i){
		if(bin[i] == 1){
			++currentCount;
		}else{
			if(currentCount > finalCount){
				finalCount = currentCount;
			}
			currentCount = 0;
		}
	}

	if(currentCount > finalCount){
		finalCount = currentCount;
	}

	cout << finalCount << endl;

    return 0;
}
