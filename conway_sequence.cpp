#include <iostream>
#include <vector>

using namespace std;

int main(){

    int R;
    int L;

    cin >> R;
    if ((R<0)|| (R>100)) return 0;

    cin >>L;
    if ((L<0) || (L>25)) return 0;

    vector <int> v;
    vector <int> newv;

    int sk=0;
    v.push_back(R);

    for (int j=1; j<L; j++){

    sk=0;
        for (int i=0; i<v.size()-1; i++){

            sk++;
            if (v[i]!=v[i+1]){
               newv.push_back(sk);
               newv.push_back(v[i]);
               sk=0;
            }

        }

            sk++;
            newv.push_back(sk);
            newv.push_back(v[v.size()-1]);

        v.clear();
        for(auto element : newv){
            v.push_back(element);
        }
        newv.clear();
    }
    for (int i=0; i<v.size()-1; i++){
        cout<<v[i]<< " ";
    }
    cout<<v[v.size()-1]<<endl;







}
