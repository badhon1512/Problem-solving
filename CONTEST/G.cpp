#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	int t;
	long long m;
	long long n;
	long long ans;

	scanf("%d", &t);
	long long A[t];

	for (int i = 1; i <= t; i++) {
		scanf("%lld %lld", &n, &m);
		ans = (n * m ) / 2;
		A[i]=ans;
	}
    for (int i = 1; i <= t; i++) {
            cout<<"Case "<<i<<": "<<A[i]<<endl;

	}
}

