#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int t;
    int testCount = 1;
    cin >> t;
    string s1;
    string s2;
    cin.ignore();
    while(t--){
        getline(cin, s1);
        getline(cin, s2);
        int result = 0;// biến lưu kết quả
        int lenS2 = s2.length();
        auto index = s1.find(s2);// tìm vị trí s2 trong s1
        while(index != string::npos){
            result++;
            s1 = s1.substr(index + lenS2);
            index = s1.find(s2);//tìm vị trí kế tiếp
        } 
        cout << "Test " << testCount++ << ": " << result << endl;
    }

    return 0;
}