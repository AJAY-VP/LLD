#include<bits/stdc++.h>
#include "Marker.h"
#include "Invoice.h"
#include "PrintInvoice.h"
using namespace std;
int main(){
    Marker* m = new Marker("Marker", 10);
    Marker* n = new Marker("RedMarker", 20);
    Invoice *i = new Invoice(m, 5);
    Invoice *j = new Invoice(n, 10);
    i->calculateTotalPrice();
    j->calculateTotalPrice();
    PrintInvoice *pi = new PrintInvoice(i);
    pi->display();
    pi = new PrintInvoice(j);
    pi->display();

    return 0;
}