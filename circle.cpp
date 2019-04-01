#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void PokeBall(int x1, int y1){
		setfillstyle(SOLID_FILL, RED);
		sector(x1,y1,0,180,60,60);
		arc(x1,y1,180,360,60);
}

int PokemonBallDriver(){
	int x, y = 0, j, t = 400, c = 1;
	
	for (x = 40; x < 602; x++) {
		cleardevice();
		PokeBall(x,y);
			
	for( float radius=0; radius<10; radius+=0.1){
		setfillstyle(SOLID_FILL, RED);
		circle(x, y, radius);
	}
	
	floodfill(x, y, BLACK);
	delay(20);
		
	if (y>=400){
		c=0;
		t-=20;
		}
		if (y<=(400-t))
			c=1;
			y=y+(c?15:-15);
	}
}


int main(){
	//Importing Driver
	int gd = DETECT, gm = DETECT;
	initgraph(&gd, &gm, "");
	//outline color
	setcolor(BLACK);
	//necessary for Pokeball
	setbkcolor(WHITE);
	
	//Scene1
	 
	//Scene2
	 
	//Scene3 after pokemon gets captured
	PokemonBallDriver();	
	
	//On Screen Display essentials
	getch();
	return 0;
}
