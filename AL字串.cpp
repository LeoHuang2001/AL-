#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string s;
	ifstream A("2.txt");
	getline(A,s);
	cout<<s<<endl<<"Ans=";
	int i,j,z;
	for(i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='a'||s[i]=='A')
		{
			for(j=i;j<s.size();j++)
			{
				if(s[j]=='l'||s[j]=='L')
				{
					for(z=i;z<=j;z++)
					s[z]='0';
					break;
				}
			}
		}		
	 } 
	for(i=0;i<s.size();i++)
	{
		if(s[i]!='0')cout<<s[i];
	}
	return 0;
	A.close();	
}
