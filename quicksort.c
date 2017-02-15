#include <stdio.h>
#include <assert.h>

//
// Created by stenlee on 15.02.17.
//
void  quicksort(int a[], int len);

void  printa(int a[], int len, int piv) {
    for (int i=0; i < len; ++i) {
        const char* s = (i == piv ? "*" : "");
        if (i == 0)
            printf("{ %s%d", s, a[i]);
        else
            printf(", %s%d", s, a[i]);
        if (i == piv)
            printf("*");
    }
    printf("}\n");
}


void  quicksort(int a[], int len) {
    if (len == 0 || len == 1)
        return;

    int b[len];
    int pivot = a[0];
    int i = 0, j = len-1;
    for (int k = 1; k < len; ++k) {
        if (a[k] <= pivot)
            b[i++] = a[k];
        else
            b[j--] = a[k];
    }

    assert(i == j);
    b[i] = pivot;

    printa(b, len, i);

    quicksort(b, i);
    quicksort(b + i + 1, len - i - 1);

    for (int l = 0; l < len; l++)
        a[l] = b[l];
}

void main() {
    const int N = 9;
    int a[] = {1949, 1943, 1977, 1949, 2001, 1978, 1939, 1976, 2007};
    printa(a, N, -1);
    quicksort(a, N);
    printa(a, N, -1);
}
