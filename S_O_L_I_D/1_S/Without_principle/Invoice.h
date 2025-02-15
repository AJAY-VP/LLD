#include "Marker.h"
using namespace std;
class Invoice{
public:
    Marker *marker;
    int quantity;
    float totalPrice;
    Invoice(Marker* marker, int quantity) : marker(marker), quantity(quantity), totalPrice(0) {}

    void CalculateTotalPrice(){
        totalPrice = marker->price * quantity;
    }

    void PrintInvoice(){
        cout<<"Marker Name: "<<marker->name<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Total Price: "<<totalPrice<<endl;
    }
    
    // the calculate logic should stay here but the print logic should be separated
    // this is because the class should have only one reason to change (following the Single Responsibility Principle)
};
