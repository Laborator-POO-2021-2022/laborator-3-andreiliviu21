#include "fractie.hpp"
int main() {
    // int x, y;
    Fractie z, q;
    Fractie t(3,6);
    Fractie a(t);
    Fractie b;
    b.operator=(a);
    cout << "\nProdusul 3/6 este: " << t.getValoare() << endl;
    t = t.getInv();
    cout << "\nValorile lui t sunt:" << endl;
    cout << "Numaratorul lui t este: " << t.getA() << endl;
    cout << "Numitorul lui t este: " << t.getB() << "\n" << endl;
    z.setdata(10,2);
    
    q = operator+(a, z);
    cout << "\nAm folosit operatorul +" << endl;
    cout << "Numaratorul lui q este: " << q.getA() << endl;
    cout << "Numitorul lui q este: " << q.getB() << endl;

    q = operator-(a, z);
    cout << "\nAm folosit operatorul -" << endl;
    cout << "Numaratorul lui q este: " << q.getA() << endl;
    cout << "Numitorul lui q este: " << q.getB() << endl;

    q = operator*(a, z);
    cout << "\nAm folosit operatorul *" << endl;
    cout << "Numaratorul lui q este: " << q.getA() << endl;
    cout << "Numitorul lui q este: " << q.getB() << endl;

    q = operator/(a, z);
    cout << "\nAm folosit operatorul /" << endl;
    cout << "Numaratorul lui q este: " << q.getA() << endl;
    cout << "Numitorul lui q este: " << q.getB() << endl;

    a.operator+=(a);
    cout << "\nAm folosit operatorul +=" << endl;
    cout << "Numaratorul lui q este: " << a.getA() << endl;
    cout << "Numitorul lui q este: " << a.getB() << endl;

    a.operator-=(a);
    cout << "\nAm folosit operatorul +=" << endl;
    cout << "Numaratorul lui q este: " << a.getA() << endl;
    cout << "Numitorul lui q este: " << a.getB() << endl;

    a.operator/=(a);
    cout << "\nAm folosit operatorul +=" << endl;
    cout << "Numaratorul lui q este: " << a.getA() << endl;
    cout << "Numitorul lui q este: " << a.getB() << endl;

    //bool
    cout << "\nOperatorul bool == : " << b.operator==(t) << endl;
    cout << "Operatorul bool != : " << b.operator!=(t) << endl;
    cout << "Operatorul bool < : " << b.operator<(t) << endl;
    cout << "Operatorul bool >= : " << b.operator>=(t) << endl;
    cout << "Operatorul bool > : " << b.operator>(t) << endl;
    cout << "Operatorul bool >= : " << b.operator>=(t) << endl;





    return 0;
}