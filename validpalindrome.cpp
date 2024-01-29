#include <iostream>
using namespace std;
bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }
char lowerCase(char ch){
        if ((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        }
        else{
            char temp =ch-'A'+'a';
            return temp;
        }
    }
bool checkpalindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if (a[s]!=a[e]){
            return 0;
    }
    else{
        s++;
        e--;
    }}
    return 1;
}

    bool isPalindrome(string s) {
        string temp="";
        //removing unnecessary charachters
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
            temp.push_back(s[i]);
        }}  
        for(int j=0;j<temp.length();j++){
            temp[j]=lowerCase(temp[j]);
    }
    return checkpalindrome(temp);}
int main(){
    isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}