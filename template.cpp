// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
void sort(T *a, int i){
int b[i], c[i];

int j,k,l,ind;
	
for(j = 0; j<i; j++)  c[j] = 1;
	
for(j = 0; j<i; j++){
	k=0;
	
	while(!c[k]) k++;
	ind = k;
	b[j]=a[k]
	
	for(l=k; l<i;l++){
		if(a[l]>b[j] && c[l] == 1){
			b[j] = a[l];
			ind = l;
}
}
	
	c[ind] = 0;
}
		
			
	
	
  


int main()
{

	
    return 0;
}

