// stonewt.cpp -- Stonewt methods
#include <iostream>

using std::cout;

#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;    // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    style = POUNDS;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    style = FLOATPOUNDS;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    style = STONE;
}

Stonewt::~Stonewt()         // destructor
= default;

void Stonewt::set_style(Style m) {
    style = m;
}

Stonewt Stonewt::operator+(const Stonewt &s) const {
    Stonewt m;
    m.pounds = pounds + s.pounds;
    m.stone = m.pounds / Lbs_per_stn;
    m.pds_left = int(m.pounds) % Lbs_per_stn + m.pounds - int(m.pounds);
    m.style = this->style;

    return m;
}

Stonewt Stonewt::operator-(const Stonewt &s) const {
    Stonewt m;
    m.pounds = pounds - s.pounds;
    m.stone = m.pounds / Lbs_per_stn;
    m.pds_left = int(m.pounds) % Lbs_per_stn + m.pounds - int(m.pounds);
    m.style = this->style;

    return m;
}

Stonewt Stonewt::operator*(double n) const {
    Stonewt m;
    m.pounds = pounds * n;
    m.stone = m.pounds / Lbs_per_stn;
    m.pds_left = int(m.pounds) % Lbs_per_stn + m.pounds - int(m.pounds);
    m.style = this->style;

    return m;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s) {
    if (s.style == Stonewt::STONE) {
        double st = s.stone + s.pds_left / Stonewt::Lbs_per_stn;
        os << st << " stone";
    } else if (s.style == Stonewt::POUNDS) {
        os << s.pounds << " pounds";
    } else if (s.style == Stonewt::FLOATPOUNDS) {
        os << s.stone << " stone, " << s.pds_left << " pounds";
    }
    return os;
}
