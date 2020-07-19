#include <iostream>
#include <vector>

using namespace std;

int main(){

    int countOfRecords;
    int minimumDifference;
    int value;
    vector <int> temperatureRecord;
    cin >> countOfRecords;

    cin >> value;
    temperatureRecord.push_back(value);
    minimumDifference=temperatureRecord[0];
    if ((temperatureRecord[0]<(-273)) || (temperatureRecord[0]>5526)){
                minimumDifference=0;
            }

        for(int i=1; i<countOfRecords-1; i++){

            cin >> value;
            temperatureRecord.push_back(value);
            if (((temperatureRecord[i])==abs(minimumDifference))|| (abs(temperatureRecord[i])==(minimumDifference) )){
                if (temperatureRecord[i]>minimumDifference){
                    minimumDifference=temperatureRecord[i];
                }

            }
            else if (abs(temperatureRecord[i])<abs(minimumDifference)){
                minimumDifference=temperatureRecord[i];
            }
            else if ((temperatureRecord[i]<(-273)) || (temperatureRecord[i]>5526)){
                minimumDifference=0;
            }




        }
        if (temperatureRecord.empty()){
                minimumDifference=0;
            }
        cout <<minimumDifference<<endl;
}
