//
// Created by HRF on 2022/1/31.
//
#include "iostream"

using namespace std;

const float POUNDS_PRE_KILOGRAM = 2.2;
const int INCHES_PRE_FOOT = 12;
const float METER_PRE_INCH = 0.0254;

int main() {
    int height_feet, height_inches;
    float weight_pounds, height, weight, BMI;

    // 输入 5feet 5inches
    cout << "Please input your height(feet):";
    cin >> height_feet;
    cout << "and input your height(inches):";
    cin >> height_inches;
    // 输入132磅
    cout << "Please input your weight(pounds):";
    cin >> weight_pounds;

    height = float(height_feet * INCHES_PRE_FOOT + height_inches) * METER_PRE_INCH;
    weight = weight_pounds / POUNDS_PRE_KILOGRAM;

    BMI = weight / (height * height);
    cout << "Your BMI is " << BMI << endl;

    return 0;
}