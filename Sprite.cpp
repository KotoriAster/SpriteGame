#include"Sprite.h"

Cat::Cat(rect rect_1, ACL_Image * a_image, pair<int,int> move_parameter,int init_score)
{
    Sprite_rect=rect_1;
    image=a_image;
    movement=move_parameter;
    score=init_score;
}

Cat::Cat(rect& rect_1, ACL_Image *& a_image, std::pair<int, int>& move_parameter, int init_score){
    Sprite_rect=rect_1;
    image=a_image;
    movement=move_parameter;
    score=init_score;
}

Cat::~Cat()
{
}

void Cat::reaction(){
    ;
}

Rat::Rat(rect rect_1, ACL_Image * a_image, pair<int,int> move_parameter,int init_score,bool p_)
{
    Sprite_rect=rect_1;
    image=a_image;
    movement=move_parameter;
   if(p_) score=init_score;
    else score=-1*init_score;
}

Rat::Rat(rect& rect_1, ACL_Image *& a_image, std::pair<int, int>& move_parameter, int init_score,bool & p_){
    Sprite_rect=rect_1;
    image=a_image;
    movement=move_parameter;
    if(p_) score=init_score;
    else score=-1*init_score;
}

Rat::~Rat()
{
}

void Rat::reaction(){
    ;
}