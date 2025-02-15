#include "Marker.h"
using namespace std;
class Invoice{
public:
    Marker *marker;
    int quantity;
    float totalPrice;
    Invoice(Marker* marker, int quantity) : marker(marker), quantity(quantity), totalPrice(0) {}
    void calculateTotalPrice(){
        totalPrice = marker->price * quantity;
    }
};
