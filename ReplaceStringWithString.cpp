#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

string replaceAll(string s1, string s2, string s3){
    auto index = s1.find(s2);// tìm vị trí s2 trong s1 
    while(index != string::npos){
        s1 = s1.replace(index, s2.length(), s3);
        index = s1.find(s2);// tiếp tục tìm
    }
    return s1;
}



int main(){
    int t;
    cin >> t;
    int testCount = 1;
    cin.ignore();
    string s1;
    string s2;
    string s3;
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        auto result = replaceAll(s1, s2, s3);
        cout << "Test " << testCount++ << ": " << result << endl;
    }

    return 0;
}