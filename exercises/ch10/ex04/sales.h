//
// Created by HRF on 2022/2/7.
//
#ifndef SALES_H
#define SALES_H

namespace SALES {
    const int QUARTERS = 4;
    class Sales {
    private:
        double sales[QUARTERS]{};
        double average{};
        double max{};
        double min{};
    public:
        Sales();
        Sales(const double ar[], int n);
        ~Sales() = default;;
        void showSales();
    };
}

#endif //SALES_H
