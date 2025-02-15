#include<bits/stdc++.h>
#include "Marker.h"
#include "Invoice.h"
using namespace std;
int main(){
    Marker* m = new Marker("Marker", 10);
    Marker* n = new Marker("RedMarker", 20);
    Invoice *i = new Invoice(m, 5);
    Invoice *j = new Invoice(n, 10);
    i->CalculateTotalPrice();
    i->PrintInvoice();
    j->CalculateTotalPrice();
    j->PrintInvoice();
    return 0;
}