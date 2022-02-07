//golf.h--forpr9-1.cpp
const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};

//non-interacti veversion:
//function sets golf structure to provided name, handicap
//using values passed asarguement to the function
void setgolf(golf &g, const char *name, int hc);

//interacti veversion：
//function solicits name and handicap from user
//and sets the members of g to the values entered
//return 1 if name is entered,0 if name is empty string
int setgolf(golf &g);

//function resets handicap to new value
void handicap(golf &g, int hc);

//function displays contents of golf structure
void showgolf(const golf &g);
