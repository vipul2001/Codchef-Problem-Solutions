#include <iostream>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main()
{
	long t,a,b;
	cin>>t;
	while(t--)
	{
	
	cin>>a;
	cin>>b;
	cout<<binpow(a,b)<<endl;

}
}
