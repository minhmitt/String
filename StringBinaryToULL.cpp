#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;


int main(){
    int t;
    int testCase = 1;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin, s);
        auto value = stoull(s, nullptr, 16);
        cout << "Test " << testCase++ << ": " << value << endl;
    }
    return 0;
}