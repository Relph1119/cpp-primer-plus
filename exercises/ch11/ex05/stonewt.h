// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
public:
    enum Style {
        STONE, POUNDS, FLOATPOUNDS
    };
private:
    enum {
        Lbs_per_stn = 14
    };      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Style style;
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();

    void set_style(Style m);

    Stonewt operator+(const Stonewt &s) const;

    Stonewt operator-(const Stonewt &s) const;

    Stonewt operator*(double n) const;

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif
