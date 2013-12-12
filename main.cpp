#include<iostream>
#include<assert.h>

using namespace std;

void mink(int a[],int n,int k)
{
	assert(n>0 && k>0);
	int temp;
     for(int i=0;i<k;i++)
	   for(int j=i+1;j<n;j++)
		   if(a[j]<a[i]) 
		   {
			   temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
		   }
}

int maxsum(int a[],int n)
{
	assert(n>0);
	int preresult=0;
	int result=0;

	for(int i=0;i<n;i++)
	{
		if(result>preresult)
		    preresult=result;

		result+=a[i];
		if(result<0)
			result=0;
		

	}
	return (result>preresult)?result:preresult;
	//return result;
}
int main()
{
	int b[]={2,-2,1,-2,4};
	int a[8]={1,-2,3,10,-4,7,2,-5};
	cout<<maxsum(a,8)<<endl;
	cout<<maxsum(b,5)<<endl;

    mink(b,5,5);
	for(int i=0;i<5;i++)
		cout<<b[i]<<" ";
	cout<<endl;

	getchar();
	return 0;
}