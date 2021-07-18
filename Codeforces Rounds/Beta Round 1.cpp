#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a; 
    cin >> n >> m >> a;
    
    long long int x = m % a == 0 ? m/a : (m+a-1)/a;
    long long int y = n % a == 0 ? n/a : (n+a-1)/a;
    
    cout << x * y;
    
    return 0;
}
