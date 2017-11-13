
#include <iostream>
using namespace std;

// I am in branch test
int fact( int n )
{
	if ( n == 0 ) return 1;
	return fact(n-1) * n;
}

// This is function main
int main() 
{
	// Get Input
	int n;
	cin>>n;
	
	cout<<fact(n);
	return 0;
}

