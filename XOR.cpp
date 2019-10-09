// A Prog. to construct array of XORs of 
//all elements except given index elemenet
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void constXorarray(ll a[], ll n) 
{  
    ll Xor = 0; 
    for (ll i = 0; i < n; i++) 
        Xor ^= a[i]; 
  
      for (ll i = 0; i < n; i++) 
        a[i] = Xor ^ a[i]; 
} 
int main() 
{ 
	ll n;
    cout << "ENTER THE NUMBER OF ELEMENTS IN ARRAY:\n";
    cin >> n;
    ll arr[n];
    cout << "ENTER THE ELEMENTS OF ARRAY:\n";
    for(ll i=0;i<n;i++)
    	cin >> arr[i]; 
    constXorarray(arr, n); 
    cout << "REQUIRED ARRAY IS:\n";
    for (ll i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 