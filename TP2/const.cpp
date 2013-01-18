double d;
//const double r;
double pi = 3.1416;
//double *ptr = &pi;
//double *const cpt;
//double *const ptd = &d;
//const double *ctd = &d;
//const double *ptc = &pi;
//double *const ptp = &pi;
const double *const ppi = &pi;
/*double *const *pptr1 = &ptc;
double *const *pptr2 = &ptd;*/
int main () {
  //ptr = new double;
  //r = 1.0;
  //*ptr = 2.0;
  //*cpt = new double;
  //*cpt = 3.0;
  //ptc = new double;
  //*ptc = 4.0;
  //ptd = new double;
  //*ptd = 5.0;
  //ctd = new double;
  //*ctd = 6.0;
  //ptp = new double;
  //*ptp = 7.0;
  ppi = new double;
  *ppi = 8.0; 
  return 0;
}
