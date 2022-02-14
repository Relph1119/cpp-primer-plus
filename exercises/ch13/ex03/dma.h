// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_

#include <iostream>

using namespace std;

class ABC {
public:
    virtual ~ABC() = default;

    virtual void View() {
        cout << "This is ABC View(), it is empty.\n";
    }
};

//  Base Class Using DMA
class baseDMA : public ABC {
private:
    char *label;
    int rating;
public:
    baseDMA(const char *l = "null", int r = 0);

    baseDMA(const baseDMA &rs);

    ~baseDMA() override;

    void View() override;

    baseDMA &operator=(const baseDMA &rs);

    friend std::ostream &operator<<(std::ostream &os,
                                    const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public baseDMA {
private:
    enum {
        COL_LEN = 40
    };
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null",
             int r = 0);

    lacksDMA(const char *c, const baseDMA &rs);

    void View() override;

    friend std::ostream &operator<<(std::ostream &os,
                                    const lacksDMA &rs);
};

// derived class with DMA
class hasDMA : public baseDMA {
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null",
           int r = 0);

    hasDMA(const char *s, const baseDMA &rs);

    hasDMA(const hasDMA &hs);

    ~hasDMA() override;

    void View() override;

    hasDMA &operator=(const hasDMA &rs);

    friend std::ostream &operator<<(std::ostream &os,
                                    const hasDMA &rs);
};

#endif
