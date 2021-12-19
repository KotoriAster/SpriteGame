
#ifndef INIT_H
#define INIT_H

#include"acllib.h"
#include"Sprite.h"

const int window_width=1000,window_height=1000;
rect cat0={
    window_width/2,window_width/2,
    40,40
};

rect rat0={
    0,0,
    40,40
};

ACL_Image image_rat, image_cat, image_dog;

void init_sprite(Cat *& , Rat *& );
void loading() ;
void freeing(Cat *& , Rat *& ) ;

#endif