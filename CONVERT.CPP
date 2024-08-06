#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
void convert(string s){
    int l = s.length();
    int num = 0;
    for(int i = l-1; i >=0; i--){
        // if ((s[i] - '0')>9 && (s[i] - '0')<0 ) 
        //    {cout << "loi input"; 
        //    return 0;}
        // else 
           num = num + (int)(s[i]-'0') * pow(10, l-i-1);
    }
    cout << num << '\n';//return 0;
}
 
int main(){
    string s;
    cin >> s;
    convert(s);
}
