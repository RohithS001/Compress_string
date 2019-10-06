#include<iostream>
using namespace std;

int main()
{
	int i,j,b[52];
	char k,a[100];
	cin>>a;
	//if(a[0]==)
	for(i=0;i<52;i++)
		b[i]=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=65;j<91;j++)
		{
			if(a[i]==j)
				b[j-65]+=1;
		}
		for(j=97;j<123;j++)
		{
			if(a[i]==j)
				b[j-97+26]+=1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			k=i+65;
			cout<<k<<b[i];
		}
	}
	for(i=26;i<52;i++)
		if(b[i]!=0)
		{
			k=i+97-26;
			cout<<k<<b[i];
		}
}

