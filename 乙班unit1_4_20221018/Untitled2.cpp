#include<bits/stdc++.h> // �ܽd�Ӥw ���n�@ 
using namespace std; // �ܽd�Ӥw ���n�@ 
#define BigInt int[50];
#define MAX 50
#define SIZE 10000
int * add(int * a, int * b){
	int * temp = new BigInt;
	int i, carry = 0;
	for(int i = MAX - 1 ; i >= 0 ; i--){
		temp[i] = a[i] + b[i] + carry;
		if(temp[i]>SIZE){
			carry = 1;
			temp[i] -= SIZE;
		}
		else carry = 0;
	}
	return temp;
}


