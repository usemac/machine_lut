#ifndef _MACHINE_LUT_
#define _MACHINE_LUT_
int find_lower_than(double* arr_in, int* arr_out, double x, int n);
double interp1(double* x, double* y, int size, double xi);
double interp2(double* x, double* y, double* z, int nx, int ny, double xi, double yi);
double interp3(double x, double y, double z, double *xVec, int xVec_n, double *yVec, int yVec_n, double *zVec, int zVec_n, double *LUT);
double Flux2id(double t, double theta, double phi_d, double phi_q);
double Flux2iq(double t, double theta, double phi_d, double phi_q);
double Flux2Te(double t, double theta, double phi_d, double phi_q);
double machine_update(double v_d, double v_q, double omega_m, double * x, double * z, double Dt);
#endif
