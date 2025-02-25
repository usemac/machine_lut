#include <math.h>
#include "machine_lut.h"
#define PI 3.14159265358979323846

double machine_update(double v_d, double v_q, double omega_m, double * x, double * z, double Dt) {
    static double R_s = 0.2;
    static double N_pp = 2;

    double dphi_d, dphi_q,dtheta_m;
    double i_d, i_q, phi_d, phi_q, theta_m, tau_m;
    double theta_deg;

    phi_d = x[0];
    phi_q = x[1];
    theta_m = x[2]; // rad

    theta_deg = fmod(theta_m/PI*180, 360);

    i_d = Flux2id(0.0, theta_deg,  phi_d, phi_q);
    i_q = Flux2iq(0.0, theta_deg,  phi_d, phi_q);
    tau_m = Flux2Te(0.0, theta_deg,  phi_d, phi_q);
    
    dphi_d = v_d - R_s*i_d + N_pp*omega_m*phi_q;
    dphi_q = v_q - R_s*i_q - N_pp*omega_m*phi_d;
    dtheta_m = N_pp*omega_m;

    phi_d += Dt*dphi_d;
    phi_q += Dt*dphi_q;
    theta_m += Dt*dtheta_m;

    z[0] = i_d;
    z[1] = i_q;
    z[2] = tau_m;
    z[3] = theta_deg;

    x[0] = phi_d;
    x[1] = phi_q;
    x[2] = theta_m;

    return 1.0;
}



