/*
	coded and authored by Jie Huang on May 24, 2016
	day 6 daily challenge
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int T;
	cin >> T;

	string str;
	for(int i = 0; i < T; ++i){
		cin >> str;
		for(int j = 0; j < str.length(); j += 2){
			cout << str[j];
		}
		cout << ' ';
		for(int j = 1; j < str.length(); j += 2){
			cout << str[j];
		}
		cout << endl;
	}

    return 0;
}
