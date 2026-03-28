#include<iostream>
using namespace std;
class Calculator {
public:
    double calculateEquilibrium(double a, double b, double c, double d) {
        double q = -(b - d) / (a - c);
        double p = a * q + b;
        return q;
    }
};
int main() {
int val;

    cout << "ECONOMY CHEAT\n" << endl;
    cout << "MAU HITUNG APA ?" << endl;
    cout << "1. FUNGSI PERMINTAAN (P = ax + b)\n2. Harga Keseimbangan (P1 = ax + b dan P2 = cx + d) diketahui 2 fungsi\n3. Elastis Ekonomi (Ed)" << endl;
    cin >> val;
    if ( val == 1){
double x1, y1, x2, y2;
    cout << "Masukkan titik pertama (Q1, P1): ";
    cin >> x1 >> y1;
    cout << "Masukkan titik kedua (X2, P2): ";
    cin >> x2 >> y2;

    // Menghitung gradien (m) dan intersep (c) dari fungsi linear y = mx + c
    double m = (y2 - y1) / (x2 - x1);
    double c = y1 - m * x1;

    cout << "P = " << m << "x + " << c << endl;
    double inversM = 1 / m;
double inversC = -inversM * c;
cout << "Q = " << inversM << "y + " << inversC << endl;
    return main();
    } else if ( val == 2){
         Calculator calc;
    double a, b, c, d;

    cout << "Enter coefficients a, b, c, and d for functions y = ax + b and y = cx + d: " << endl;
    cin >> a >> b >> c >> d;

    double q = calc.calculateEquilibrium(a, b, c, d);
    double p = a * q + b;

    cout << "Titik keseimbangannya adalah bila f(x) = ax + b Q: " << q << " and P: " << p << "." << endl;\
    cout << "Titik keseimbangannya adalah bila f(y) = ay + b (invers dari fungsi x) : Q: " << p << " and P:  " << q << "." << endl;
    return main();
    }else if ( val == 3){
           // Deklarasi variabel
  double Q1, P1, Q2, P2, Ed, deltaQ, deltaP;

  // Input nilai Q1, P1, Q2, dan P2
  cout << "Masukkan nilai Q1: ";
  cin >> Q1;
  cout << "Masukkan nilai P1: ";
  cin >> P1;
  cout << "Masukkan nilai Q2: ";
  cin >> Q2;
  cout << "Masukkan nilai P2: ";
  cin >> P2;

  // Hitung selisih Q1 dan Q2
  if (Q1 > Q2) {
    deltaQ = Q1 - Q2;
  } else {
    deltaQ = Q2 - Q1;
  }

  if (P1 > P2) {
    deltaP = P1 - P2;
  } else {
    deltaP = P2 - P1;
  }



  Ed = (deltaQ / deltaP) * (P1 / Q1);

  // Tampilkan hasil
  cout << "Elastisitas (Ed) = " << Ed << endl;
  cout << "Selisih Q1 dan Q2 adalah: " << deltaQ << endl;

  return main();
    }
    
}