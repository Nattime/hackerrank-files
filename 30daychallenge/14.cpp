/*
	coded and authored by Jie Huang on May 25, 2016
	day 14 daily challenge
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;
public:
  	int maximumDifference;

	// Add your code here
	Difference(vector<int> arr){
		this->elements = arr;
		maximumDifference = 0;
	}
	void computeDifference(){
		for(int i = 0; i < elements.size(); ++i){
			for(int j = i + 1; j < elements.size(); ++j){
				int diff = abs(elements[i] - elements[j]);
				if(diff > maximumDifference){
					maximumDifference = diff;
				}
			}
		}
	}

}; // End of Difference class

int main() {
int N;
cin >> N;

vector<int> a;

for (int i = 0; i < N; i++) {
	int e;
	cin >> e;

	a.push_back(e);
}

Difference d(a);

d.computeDifference();

cout << d.maximumDifference;

return 0;
}
