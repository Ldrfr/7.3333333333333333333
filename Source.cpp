#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cout << "Enter quantity ";
	cin >> n;
	int* a;
	a = new int[n];
    int t=n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
    for (int k = 0; k < t; ++k){
        for (int s = 0; s < k; ++s){
            if (a[s] == a[k]){
                for (int i = k; i < n; i++){
                    a[i] = a[i + 1];
                }
                a[n - 1] = 0;
                k -= 1;
                t -= 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}