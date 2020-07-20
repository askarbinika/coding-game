#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    string s;
    int countof1=1;
    vector <int> ones;
    int largestsequence;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if (s.at(i)==0){
            s.at(i)==1;

            for (int j; j<s.length(); j++){
                if ((s.at(j)==1) && (s.at(j)=s.at(j+1))){
                    countof1++;
                    cout<<countof1;
                }
                else {
                        ones.push_back(countof1);
                        countof1=1;
                }

            }
            ones.push_back(countof1);
            s.at(i)==0;
        }
        else if ((s.at(i)==1)&&(s.at(i)==s.at(i+1))  ){
            countof1++;
            ones.push_back(countof1);
        }

    }
    for (int i=0; i<ones.size(); i++){
        if (ones[i]>ones[i+1]){
            largestsequence=ones[i];
        }
    }

    cout << largestsequence << endl;

}




