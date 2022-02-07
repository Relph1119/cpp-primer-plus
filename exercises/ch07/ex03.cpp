//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display_box(box b);

void calc_volume(box *b);

int main() {
    box box_maker = {"China", 12, 12, 12, 0};
    display_box(box_maker);
    calc_volume(&box_maker);

    return 0;
}

void calc_volume(box *b) {
    cout << "=====Set Volume=====" << endl;
    b->volume = b->width * b->height * b->length;
    cout << "The volume is " << b->volume << endl;
}

void display_box(const box b) {
    cout << "=====The Information Of The Box=====" << endl;
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}