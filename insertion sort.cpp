#include<iostream>
#include<cstdio>
using namespace std;
double num[10000];
void insort(int l)
{
	for(int i=1;i<l;i++)
	{
		int sub=0;
		double n=num[i];
		for(int j=i-1;j>=0;j--)
			if(num[i]>=num[j])
			{
				sub=j;
				break;
			}
		for(int j=i;j>sub+1;j--)
			num[j]=num[j-1];
		num[sub+1]=n;
	}
}
int main()
{
	int l;
	cin>>l;
	for(int i=0;i<l;i++)
		cin>>num[i];
	insort(l);
	for(int i=0;i<l;i++)
		cout<<num[i]<<" ";
	return 0;
}
