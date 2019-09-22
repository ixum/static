#include <stdio.h>

#include "alge.h"
#include "bft.h"
#include "cdo.h"
#include "comb.h"

// ==============
// #include <iostream>
// #include <vector>
// #include <random>
// #include <ctime>
// ===============

#ifdef __cplusplus
using namespace std;
extern "C" {
#endif
    void addfld();
    void matrix_add(double *A, int *rows_A, int *cols_A, double *B, int *rows_B, int *cols_B, double *C, int *rows_C, int *cols_C);
#ifdef __cplusplus 
}
#endif

//Fill a vector with random numbers in the range [lower, upper]
void rnd_fill(double *A, int rows, int cols) 
{
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            A[j * rows + i] = i * j;
        }
    }
}
 
//Print matrix A(rows, cols) storage in column-major format
void print_matrix(double *A, int rows, int cols) 
{
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            printf("%lf\t", A[j * rows + i]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
	printf("Now we are in main function, and start ... \n");
	alge_init();
	bft_init();
	cdo_init();
	comb_init();
    addfld();
	printf("The csrun is Done!\n");

    int N = 3;
    double a[N*N], b[N*N], c[N*N];
    double *A=a, *B=b, *C=c;
 
    //Fill A and B with random numbers in the range [0,1]:
    rnd_fill(A, 3, 3);
    rnd_fill(B, 3, 3);
 
    //Multiply matrices A and B, save the result in C
    int sz = N;
    matrix_add(&A[0], &sz, &sz, &B[0], &sz, &sz, &C[0], &sz, &sz);
 
    //print A, B, C on the standard output
    print_matrix(A, sz, sz);
    print_matrix(B, sz, sz);
    print_matrix(C, sz, sz);
    return 0;
}
