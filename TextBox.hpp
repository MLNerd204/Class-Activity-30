#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>

class TextBox {
private:
    std::string value;
    
public:
    TextBox();

    explicit TextBox(const std::string& str);

    std::string getValue() const;

    void setValue(const std::string& str);

    void display() const;
};

#endif
