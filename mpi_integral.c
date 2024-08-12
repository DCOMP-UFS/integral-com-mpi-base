/* File:     mpi_trap1.c
 * Purpose:  Use MPI to implement a parallel version of the trapezoidal 
 *           rule.  In this version the endpoints of the interval and
 *           the number of trapezoids are hardwired.
 *
 * Input:    None.
 * Output:   Estimate of the integral from a to b of f(x)
 *           using the trapezoidal rule and n trapezoids.
 *
 * Compile:  mpicc -g -Wall -o mpi_trap1 mpi_trap1.c
 * Run:      mpiexec -n <number of processes> ./mpi_trap1
 *
 * Algorithm:
 *    1.  Each process calculates "its" interval of
 *        integration.
 *    2.  Each process estimates the integral of f(x)
 *        over its interval using the trapezoidal rule.
 *    3a. Each process != 0 sends its integral to 0.
 *    3b. Process 0 sums the calculations received from
 *        the individual processes and prints the result.
 *
 * Note:  f(x), a, b, and n are all hardwired.
 *
 * IPP:   Section 3.2.2 (pp. 96 and ff.)
 * 
 * Plotar função online: https://www.desmos.com/calculator?lang=pt-BR
 *     f(x)=x^2-4x +8
 *     a = 0
 *     b = 3
 *     0 <= y <= f(x){(a-x)(b-x)<0}
 */
#include <stdio.h>

/* We'll be using MPI routines, definitions, etc. */
#include <mpi.h>

/* Calculate local integral  */
double integral_local(double local_a, double local_b, int local_n, 
   double base_len);    

/* Function we're integrating */
double f(double x); 

int main(void) {

   return 0;
} /*  main  */


/*------------------------------------------------------------------
 * Function:     integral_local
 * Purpose:      Serial function for estimating a definite integral 
 *               using the trapezoidal rule
 * Return val:   Trapezoidal rule estimate of integral from
 *               left_endpt to right_endpt using trap_count
 *               trapezoids
 */
double integral_local(
      double local_a  /* in */, 
      double local_b /* in */, 
      int    local_n  /* in */, 
      double h    /* in */) {
   
   return int_local;
} /*  Trap  */


/*------------------------------------------------------------------
 * Function:    f
 * Purpose:     Compute value of function to be integrated
 * Input args:  x
 */
double f(double x) {
   return x*x - 4*x + 8;
   //return x*x;
} /* f */
