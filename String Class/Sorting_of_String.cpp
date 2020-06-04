#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Comining String and Sorting Function For String Sorting

bool compare(string a,string b)
{
	if(a.length()==b.length())
	{
		return a<b;
	}
	return a.length()>b.length();
}
int main ()
{
	int n;
	cout<<" Enter the Number of strings";
	cin>>n;
	cin.get();
	
	string s[100];
	
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	sort(s,s+n,compare);
	
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	
}
