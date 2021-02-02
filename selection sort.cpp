#include<cstdio>
#include<iostream>
using namespace std;
double num[10000];
int ssort(int l)
{
	int sub=0;
	for(int i=0;i<l;i++)
	{
		double min=100000;
		for(int j=i;j<l;j++)
		{
			if(num[j]<min)
			{
				min=num[j];
				sub=j;
			}
		}
		int c=num[i];
		num[i]=num[sub];
		num[sub]=c;
	}
	return 0;
}
int main()
{
	int l;
	cin>>l;
	for(int i=0;i<l;i++)
		cin>>num[i];
	ssort(l);
	for(int i=0;i<l;i++)
		cout<<num[i]<<" ";
	return 0;
}
