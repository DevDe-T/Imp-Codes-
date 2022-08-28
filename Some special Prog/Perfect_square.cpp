#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	auto perfectSquare = [](ll a){
		ll b = sqrt(a);
		// cout<<b*b<<endl;
		return (a == b*b);
	};

	auto isPerfectSquareOf2 = [](int a){
		if(a<=0) return false;
		return (ceil(log2(a)) == floor(log2(a)));
	};

	auto isPerfectSquareOf10 = [](int a){
		if(a<=0) return false;
		return (ceil(log10(a)) == floor(log10(a)));
	};


	ll a = 100;

	cout<<isPerfectSquareOf10(a)<<endl;
	cout<<isPerfectSquareOf2(a)<<endl;
	cout<<perfectSquare(a);


	return 0;
}
