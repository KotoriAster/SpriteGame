
#ifndef SPRITE_H
#define SPRITE_H

#include<utility>
#include"acllib.h"

using std::pair;

class Sprite
{
protected:
    rect Sprite_rect;
    pair<int,int> movement;
    ACL_Image * image;
public:
    Sprite(){};
    ~Sprite(){};

    void move();
    virtual void reaction() =0;
};

class Cat :public Sprite
{
private:
    int score;
public:
    Cat(rect rect_1, ACL_Image * a_image, pair<int,int> move_parameter,int init_score);
    ~Cat();
    Cat(rect&, ACL_Image* & , std::pair<int, int>&, int);
    void reaction();
};

class Rat :public Sprite
{
private:
    bool poisonous;
    int score;
public:
    Rat(rect rect_1, ACL_Image * a_image, pair<int,int> move_parameter,int init_score,bool);
    Rat(rect& rect_1, ACL_Image *& a_image, std::pair<int, int>& move_parameter, int init_score,bool &);
    ~Rat();
    void reaction();
};




#endif