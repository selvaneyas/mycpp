#include<iostream>
using namespace std;

int main()
{
	int n,num,dig,rev=0;
	cout<<" Enter a Positive Number : ";
	cin>>num;
	
	n=num;
	
	while(num)
	{
		dig=num%10;
		rev=(rev*10)+dig;
		num=num/10;
	}
	
	cout<<" The Reverse of the number is : "<<rev<<endl;
	
	if (n==rev)
	{
		cout<<" The Number is a Palindrome";
	}
	else
	{
		cout<<" The Number is not a Palindrome";
	}
	
	return 0;
}
