//golf.h--forpr9-1.cpp
const int Len = 40;

class golf{
private:
    char fullname[Len]{};
    int handicap{};
public:
  golf();
  golf(const char * name, int hc);
  ~golf();
  void setHandicap(int hc);
  void showgolf() const;
};
