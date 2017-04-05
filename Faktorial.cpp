#include <iostream>

using namespace std;

int faktorial (int n)
{
	// base untuk faktorial
	if (n==1)
	return 1;
	else
	return n * faktorial (n - 1);
}
int main (int argc, char const *argv[])
{
	int hasil = faktorial (3);
	cout<<hasil<<endl;
	return 0;
} 