#include<iostream>
#include<vector>
#include<string>

using namespace std;

int countOnes(string s) {
	int max_ones=0;
	int current_ones=0;

	for (auto c : s) {
		if (c == '1') current_ones++;
		if (c == '0') {
				max_ones=max(max_ones,current_ones);
				current_ones=0;
		}
	}
	return max_ones;
}

int main() {
	string s;
	int largestsequence=0;

	cin >> s;

	for(int i=0; i<s.length(); i++){
		if (s[i] == '0') {
			s[i] = '1';
			if (countOnes(s) > largestsequence) {
				largestsequence=countOnes(s);
			}
			s[i] = '0';
		}
	}
	cout << largestsequence << endl;
}

