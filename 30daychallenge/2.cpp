#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	double mealCost, tipPercent, taxPercent;
	cin >> mealCost >> tipPercent >> taxPercent;

	tipPercent = (tipPercent/100) * mealCost;
	taxPercent = (taxPercent/100) * mealCost;

	int totalCost = round(mealCost + tipPercent + taxPercent);

	cout << "The total meal cost is " << totalCost << " dollars." << endl;

    return 0;
}
