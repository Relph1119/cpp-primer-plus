//
// Created by HRF on 2022/2/14.
//
#ifndef CLASSIC_H
#define CLASSIC_H

// base class
class Cd { // represents a CD disk
private:
    char performers[50]{};
    char label[20]{};
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd() = default;
    virtual void Report() const; // reports all CD data
    Cd &operator=(const Cd &d);
};

class Classic : public Cd {
private:
    char works[50]{};
public:
    Classic();
    Classic(const Classic &c);
    Classic(const char *s1, const char *s2, const char *s3, int n, double x);
    ~Classic() override = default;
    void Report() const override;
    Classic &operator=(const Classic &c);
};

#endif //CLASSIC_H
