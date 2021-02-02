#include<iostream>
#include<cstdio>
using namespace std;
double num[10000],c[10000];
void msort(int low,int hi)
{
	if(hi<=low)
		return;
	int i=low, j=(low+hi)/2+1;
	msort(i,j-1);
	msort(j,hi);
	for(int k=low;k<=hi;k++)
		c[k]=num[k];
	for(int k=low;k<=hi;k++)
		if(i>(low+hi)/2)
			num[k]=c[j++];
		else if(j>hi)
			num[k]=c[i++];
		else if(c[j]<c[i])
			num[k]=c[j++];
		else 
			num[k]=c[i++];
}
int main()
{
	int l;
	cin>>l;
	for(int i=0;i<l;i++)
		cin>>num[i];
	msort(0,l-1);
	for(int i=0;i<l;i++)
		cout<<num[i]<<" ";
	return 0;
}
