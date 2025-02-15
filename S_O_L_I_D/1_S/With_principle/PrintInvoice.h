class PrintInvoice {
    Invoice *invoice;
public:
    PrintInvoice(Invoice *invoice) : invoice(invoice) {}
    void display(){
        cout<<"Marker Name: "<<invoice->marker->name<<endl;
        cout<<"Quantity: "<<invoice->quantity<<endl;
        cout<<"Total Price: "<<invoice->totalPrice<<endl;
    }
};