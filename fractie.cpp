#include "fractie.hpp"

Fractie::Fractie(int aa, int bb) {
    a = aa;
    b = bb;
}

Fractie::Fractie(const Fractie &obj) {
    a = obj.a;
    b = obj.b;
}

Fractie &Fractie::operator=(const Fractie &obj) {
    a = obj.a;
    b = obj.b;
    return *this;
}

Fractie::~Fractie() {
    a = 0;
    b = 0;
}

double Fractie::getValoare() const {
    if (b == 0) {
        cout << "Impartirea la zero este imposibila" << endl;
        return 0;
    } else {
        return ((double)this->a/(double)this->b);
    }
}

Fractie Fractie::getInv() const {
    Fractie obj;
    obj.a = this->b;
    obj.b = this->a;
    return obj;
}

void Fractie::setdata(int a, int b) {
    this->a = a;
    this->b = b;
}

float Fractie::getA() {
    return (float) a;
}

float Fractie::getB() {
    return (float) b;
}

Fractie operator +(const Fractie &x, const Fractie&y) { 
    Fractie adunare;
    adunare.a = x.a + y.b;
    adunare.b = x.b + y.a;
    return adunare;
}

Fractie operator -(const Fractie &x, const Fractie&y) { 
    Fractie scadere;
    scadere.a = x.a - y.b;
    scadere.b = x.b - y.a;
    return scadere;
}

Fractie operator *(const Fractie &x, const Fractie&y) {
    Fractie produs;
    produs.a = x.a * y.b;
    produs.b = x.b * y.a;
    return produs;
}

Fractie operator /(const Fractie &x, const Fractie&y) {
    Fractie impartire;
    double aux1, aux2;
    if (x.b != 0 && y.a != 0) {
        aux1 = (double)x.a / (double)y.b;
        aux2 = (double)x.b / (double)y.a;
        impartire.a = aux1;
        impartire.b = aux2;
        // cout << "\naux1 este: " << aux1 << endl;
        // cout << "\naux2 este: " << aux2 << endl;
        // cout << "\nx.a este: " << x.a << endl;
        // cout << "\nx.b este: " << x.b << endl;
        // cout << "\ny.a este: " << y.a << endl;
        // cout << "\ny.a este: " << y.b << endl;
        
    }
    return impartire;
}

Fractie operator -(const Fractie &x) {
    Fractie y;
    y.a = x.a * (-1);
    y.b = x.b;
    return y;
}

Fractie &Fractie::operator +=(const Fractie &x) {
    *this = *this + a;
    return *this;
}

Fractie &Fractie::operator -=(const Fractie &x) {
    *this = *this - a;
    return *this;
}

Fractie &Fractie::operator *=(const Fractie &x) {
    *this = *this * a;
    return *this;
}

Fractie &Fractie::operator /=(const Fractie &x) {
    *this = *this / a;
    return *this;
}

bool Fractie::operator ==(const Fractie &x) {
    if (((*this).a == x.a) && ((*this).b == x.b)) {
        return true;
    } else {
        return false;
    }
}

bool Fractie::operator !=(const Fractie &x) {
    if (((*this).a != x.a) || ((*this).b != x.b)) {
        return true;
    } else {
        return false;
    }
}

bool Fractie::operator <(const Fractie &x) {
    if (this->a < x.a && this->b < x.b) {
        return true;
    } else {
        return false;
    }
}

bool Fractie::operator >(const Fractie &x) {
    if (this->a > x.a && this->b > x.b) {
        return true;
    } else {
        return false;
    }
}

bool Fractie::operator <=(const Fractie &x) {
    if (this->a <= x.a && this->b <= x.b) {
        return true;
    } else {
        return false;
    }
}

bool Fractie::operator >=(const Fractie &x) {
    if (this->a >= x.a && this->b >= x.b) {
        return true;
    } else {
        return false;
    }
}