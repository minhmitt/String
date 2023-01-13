#include <string>
#include <iostream>

using namespace std;

string upperCase(string s){
    for (int i = 0; i < s.size(); i++)
    {
        char c = s.at(i);
        if(c >= 'a' && c <= 'z'){
            c = c - 32;
            s.at(i) = c;
        }
    }
    return s;
}

string lowerCase(string s){
    for (int i = 0; i < s.size(); i++)
    {
        char c = s.at(i);
        if(c >= 'A' && c <= 'Z'){
            c = c + 32;
            s.at(i) = c;
        }
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while(n--){
        getline(cin, s);
        s = lowerCase(s);
        cout << s << endl;
        s = upperCase(s);
        cout << s << endl;
    }

    return 0;
}