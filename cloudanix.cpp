#include<iostream>
#include <sstream>
#include <string>
using namespace std;
string remove_consecutive_word(string &sentence)
{
	istringstream ss(sentence);
	string word,prev_word,result;
	while(ss >>word)
	{
		if(word!=prev_word)
		{
			if(!result.empty())
			{
				result += " ";
			}
			result += word;
			prev_word=word;
			
		}
	}
	return result;
	
}
int main()
{
	string sentence;
	int t;
	cin>>t;
	cin.ignore(); 
	while(t--)
	{
	cout<<"enter sentence"<<endl;
	getline(cin,sentence);
	string res=remove_consecutive_word(sentence);
	cout<<res<<endl;
	}
	
}
