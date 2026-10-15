#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    const double gbpbendras = 0.8729;
    const double gbppirkti = 0.8600;
    const double gbpparduoti = 0.9220;

    const double usdbendras = 1.1793;
    const double usdpirkti = 1.1460;
    const double usdparduoti = 1.2340;

    const double inrbendras = 104.6918;
    const double inrpirkti = 101.3862;
    const double inrparduoti = 107.8546;
int veiksmas, valiuta;
double suma;
cout<< fixed << setprecision(2);
 while (true) {
cout<< "\n--- VALIUTOS KEITYKLA ---\n";
cout<< "1. Kursu palyginimas\n2. Pirkti valiuta (EUR -> Valiuta)\n3. Parduoti valiuta (Valiuta -> EUR)\n4. Iseiti\nPasirinkite: ";
cin >> veiksmas;
if (veiksmas == 4) break;
if (veiksmas < 1 || veiksmas > 4) {
    cout << "Klaida: Neteisingas pasirinkimas!\n";
    continue;
}
cout << "Pasirinkite valiuta (1 - GBP, 2 - USD, 3 - INR): ";
cin >> valiuta;
if (valiuta < 1 || valiuta > 3) {
    cout << "Klaida: Neteisinga valiuta!\n";
    continue;
}
    string pav = "GBP";
    double k_bendras = gbpbendras, k_pirkti = gbppirkti, k_parduoti = gbpparduoti;
    if (valiuta == 2) {
        pav = "USD";
        k_bendras = usdbendras;
        k_pirkti = usdpirkti;
        k_parduoti = usdparduoti;
    } else if (valiuta == 3) {
        pav = "INR";
        k_bendras = inrbendras;
        k_pirkti = inrpirkti;
        k_parduoti = inrparduoti;
    }
    if (veiksmas == 1) {
        cout << "Tiesioginis: 1 EUR = " << setprecision(4) << k_bendras << " " << pav << "\n";
        cout << "Atvirkstinis: 1 " << pav << " = " << (1.0 / k_bendras) << " EUR\n";
        cout << setprecision(2);
    } else {
        cout << "Iveskite suma: ";
        cin >> suma;
    if (suma <=0) {
        cout<< "Klaida: Suma turi buti teigiama!\n";
        continue;
    }
    if (veiksmas == 2) {
        double eur = suma * k_pirkti;
        cout << "Rezultatas: " << suma << " EUR -> " << eur << " " << pav << "\n";
    } else if (veiksmas == 3) {
        double eur = suma / k_parduoti;
        cout << "Rezultatas: " << suma << " " << pav << " -> " << eur << " EUR\n";
        }
    }
 }
return 0;
}
