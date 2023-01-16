#include <iostream>
#include <unordered_map>
using namespace std;

 int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};//using unordered map function we can easily store the key value pair

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];    //if the numbe is lower then we subtracting it .
        }
        else{
            ans=ans+mp[s[i]];   //if the number is greater then the previous then we add it.
        }
    }
        return ans;
    }
int main()
{
	string s="";
	cout<<"Enter the Roman number:";
	cin>>s;
	int ans=romanToInt(s);
	cout<<"Ans:"<<ans;
}
