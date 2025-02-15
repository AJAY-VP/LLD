#pragma once
#include<string>
using namespace std;
class Marker{
public:
    string name;
    float price;
    Marker(string name, int price) : name(name), price(price) {}
};