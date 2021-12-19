#include <time.h>

#include "acllib.h"

#include "Initialization.h"
#include "Sprite.h"

extern const int window_width, window_height;
extern rect cat0,rat0;
extern ACL_Image image_rat, image_cat, image_dog;
int Setup(void)
{

	rect window_rect = {
		DEFAULT,
		DEFAULT,
		window_width,
		window_height,
	};

	initWindow("my sprite", window_rect.x, window_rect.y, window_rect.width, window_rect.height);
	srand((unsigned)time(NULL));
	loading();
	
	Cat * Tom;Rat * Jerry;
	init_sprite( Tom, Jerry);

	freeing(Tom,Jerry);
	

	/*
	createData(autosprite);
	createData(&usr);
	*/
	/*
    registerTimerEvent(timerEvent);
	registerKeyboardEvent(keyEvent);
	startTimer(0, 40);
	startTimer(1, 1000);
	*/
	return 0;
}

void timerevent(int timer_id)
{
}

void keyevent()
{
}

void init_sprite(Cat * &cat, Rat * &rat) {
	pair<int,int> cat_move0={0,0};
	pair<int,int> rat_move0={10,10};
	cat = new Cat(cat0, &image_cat, cat_move0, 0);
	rat = new Rat(rat0, &image_rat, rat_move0, 0,FALSE);
}

void loading() {
	loadImage("jerry.bmp", &image_rat);
	loadImage("tom.bmp", &image_cat);
	loadImage("dog.bmp", &image_dog);
}

void freeing(Cat *& Tom, Rat *& Jerry){
	freeImage(&image_cat);
	delete Tom;
	freeImage(&image_rat);
	delete Jerry;
}
