#include <iostream>
#include "TextBox.hpp"

using namespace std;

int main() {
    TextBox tb1;
    tb1.display();

    TextBox tb2("Hello, world!");
    tb2.display();

    tb1.setValue("New value for tb1");
    tb1.display();

    cout<< "tb2's value via getter: "<<tb2.getValue()<<endl;

    return 0;
}

