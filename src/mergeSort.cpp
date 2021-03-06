#include "mergeSort.h"

void intercall(int *v, int n, int k) {
	int p = 0;
	int q = k;
	int* vtmp = new int[n];
	int s =0 ;
	while(p<k && q<n) {
		if (v[p]<=v[q]) vtmp[s++]=v[p++];
		else vtmp[s++]=v[q++];
	}
	while (p<k) vtmp[s++] = v[p++];
	while (q<n) vtmp[s++] = v[q++];
	for (int i = 0; i < n; i++) {
		v[i] = vtmp[i];	
	} 
}

void mergeSort(int *v, int n) {
	if (n <= 1) return;
	int k = n/2;
	mergeSort(v, k);
	mergeSort(&v[k], n-k);
	intercall(v, n, k);
}