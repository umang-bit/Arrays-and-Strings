#include <iostream>
using namespace std;
int main(){
    int arr[26]={0};
    string s;
    cout<<"enter the string boss"<<endl;
    cin>>s;
    for (int i=0;i<s.length();i++){
        if (s[i]>='a' && s[i]<='z'){
            int index=s[i]-'a';
            arr[index]++;
        }
        else {
            int index=s[i]-'A';
            arr[index]++;
        }
    }
    int max=-1;
    int index2=-1;
    for (int j=0;j<26;j++){
        if(max<arr[j]){
            max=arr[j];
            index2=j;

        }
    }
    char ans='a'+index2;
    cout<<"the maximum occuring character is "<<ans<<endl;


    return 0;
}