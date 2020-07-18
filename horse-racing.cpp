#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    int value;
    vector <int> v;

    for (int i=0; i<n; i++){

        cin >> value;
        v.push_back(value);

    }

    sort (v.begin(), v.end());


    int minimum_difference= abs(v[0]-v[1]);

    for(unsigned long i=0; i< v.size()-1; i++){

        long difference= abs(v[i]-v[i+1]);
        if (minimum_difference>difference){
            minimum_difference=difference;
        }

}
    cout << minimum_difference<< endl;


}
