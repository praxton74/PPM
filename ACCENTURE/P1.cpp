#include<bits/stdc++.h>
using namespace std;

int calculate (int r, int unit, int arr[], int n)
{
    if (n == 0)
        return -1;
    
    int totalFoodRequired = r * unit;
    int foodTillNow = 0;
    int house = 0;
    
    for (house = 0; house < n; ++house)
    {
        foodTillNow += arr[house];
        if (foodTillNow >= totalFoodRequired)
	    {
    	    break;
    	}
    }
    if (totalFoodRequired > foodTillNow)
        return 0;
    return house + 1;
}

int main ()
{
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate (r, unit, arr, n);
    return 0;
}
