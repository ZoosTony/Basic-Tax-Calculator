#include<iostream>
#include<cmath>

using namespace std;


int main (){

  int cas, cass, iv, brut, net, obg, cam, totalTax;
  cout << "Introduceti salariul brut: " << endl;
  cin >> brut;
  cas = (brut * 25) / 100;
  cass = (brut * 10) / 100;
  obg = brut - (cas + cass);
  iv = (obg * 10) / 100;
  cam = (brut * 2.25) / 100;
  net = brut - (cas + cass + iv);
  totalTax = cas + cass + iv + cam;
  cout << net << " RON NET" << endl;
  cout << cas << " RON CAS" << endl;
  cout << cass << " RON CASS" << endl;
  cout << iv << " RON Impozit pe venit" << endl;
  cout << cam << " CAM 2.25%" << endl;
  cout << "Total Taxe: " << totalTax << endl;







  return 0;
}
