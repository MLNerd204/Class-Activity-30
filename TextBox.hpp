#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>

using namespace std;

class TextBox {
private:
    string value;
    
public:
    TextBox();

    explicit TextBox(const string& str);

    string getValue() const;

    void setValue(const string& str);

    void display() const;
};

#endif
