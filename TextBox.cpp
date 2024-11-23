#include "TextBox.hpp"
#include <iostream>

using namespace std;

TextBox::TextBox():value("") {
    cout<<"Default constructor called. Value is empty."<<endl;
}

TextBox::TextBox(const string& str) : value(str) {
    cout << "Explicit constructor called. Value is set to: " << value << endl;
}

string TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const string& str) {
    value=str;
}

void TextBox::display() const {
    cout<<"TextBox value: "<<value<<endl;
}
