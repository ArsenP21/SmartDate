#pragma once

class SD {
private:
    short day, month, year;
public:
    SD(short day, short month, short year);
};

SD::SD(short d, short m, short y) {
    day = d;
    month = m;
    year = y;
    std::cout << d << "." << m << "." << y;
}