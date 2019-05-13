#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void pokeball(int,int,int );
void ballsplit();
void pokeballxtrans();
void pokeballytrans(int );
void pokemon(int , int);
void pokeshrink();
void boundaryFill4(int , int ,int ,int);
void bounce();
void ballbreak();

int main() {


	int gd=DETECT,gm,i,font=0;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLACK);

       //	setbkcolor(WHITE);
	//delay(500);
	//setbkcolor(BLACK);
	pokeballxtrans();
	ballsplit();
	setbkcolor(WHITE);
	delay(250);
	setbkcolor(BLACK);
	delay(1000);
	setbkcolor(BLACK);

       pokemon(0,0);
      pokeballytrans(10);
      ballbreak(10);


     // settextstyle(10, HORIZ_DIR, 5);
      for(font =0; font<=500; font+=5){
      settextstyle(10, HORIZ_DIR, 3);
      outtextxy(font, 100, "POKEMON WON");
      delay(50);
      cleardevice();
      }

      cleardevice();
	delay(500);

	pokeballxtrans();
	ballsplit();
	setbkcolor(WHITE);
	delay(250);
	setbkcolor(BLACK);
	delay(1000);
	setbkcolor(BLACK);

	  pokemon(0,0);
       pokeshrink();

       bounce();

	      for(font =0; font<=500; font+=10){
      settextstyle(10, HORIZ_DIR, 3);
      outtextxy(font, 100, "YOU WON");
      delay(50);
      cleardevice();
      }

	closegraph();
	return 0;
}

void ballsplit() {

     pokemon(0,0);
     delay(100);

     //SPLIT
     setfillstyle(SOLID_FILL,RED);
     sector(200,110,0,180,50,50);
     setfillstyle(SOLID_FILL,WHITE);
     sector(195,135,150,-42,50,50);
     setfillstyle(SOLID_FILL,BLACK);
     sector(200,110,0,180,10,10);
     sector(195,135,150,-42,10,10);
     setfillstyle(SOLID_FILL,WHITE);
     sector(200,110,0,180,5,5);
     sector(195,135,150,-42,5,5);
     delay(500);
}

void ballbreak(int ik) {

     pokemon(0,0);
     delay(100);
     //SPLIT
     setfillstyle(SOLID_FILL,RED);
     sector(200,400+ik,0,180,50,50);
     setfillstyle(SOLID_FILL,WHITE);
     sector(195,425+ik,150,-42,50,50);
     setfillstyle(SOLID_FILL,BLACK);
     sector(200,400+ik+10,0,180,10,10);
     sector(195,410+ik+10,150,-42,10,10);
     setfillstyle(SOLID_FILL,WHITE);
     sector(200,400,0,180,5,5);
     sector(195,425,150,-42,5,5);
     delay(500);
}


 void pokeballxtrans() {

	int i;

	for(i=10 ; i<=200 ; i+=10){

	setfillstyle(SOLID_FILL,RED);
	sector(i,110,0,180,50,50);
	setfillstyle(SOLID_FILL,WHITE);
	sector(i,110,180,360,50,50);
	setfillstyle(SOLID_FILL,BLACK);
       /*	circle(200,200,15);
	floodfill(200,200,WHITE);
       */
	sector(i,110,0,180,10,10);
	sector(i,110,180,360,10,10);
	setfillstyle(SOLID_FILL,WHITE);
	sector(i,110,0,180,5,5);
	sector(i,110,180,360,5,5);

	delay(40);
	cleardevice();
	pokemon(0,0);
      }
}

 void pokeballytrans() {

	int i;

	for(i=110 ; i<=300 ; i+=10){

	setfillstyle(SOLID_FILL,RED);
	sector(200,i,0,180,50,50);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,i,180,360,50,50);
	setfillstyle(SOLID_FILL,BLACK);
       /*	circle(200,200,15);
	floodfill(200,200,WHITE);
       */
	sector(200,i,0,180,10,10);
	sector(200,i,180,360,10,10);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,i,0,180,5,5);
	sector(200,i,180,360,5,5);

	delay(40);
	cleardevice();
	pokemon(0,0);
      }
}


void pokeball(int x,int y,int color){
	setfillstyle(SOLID_FILL,RED);
	sector(200+x,110+y,0,180,50,50);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200+x,110+y,180,360,50,50);
	setfillstyle(SOLID_FILL,BLACK);
       /*	circle(200,200,15);
	floodfill(200,200,WHITE);
       */
	sector(200+x,110+y,0,180,10,10);
	sector(200+x,110+y,180,360,10,10);
	setfillstyle(SOLID_FILL,color);
	sector(200+x,110+y,0,180,5,5);
	sector(200+x,110+y,180,360,5,5);

	delay(30);
	cleardevice();
}

void pokemon(int i,int j){
	setfillstyle(SOLID_FILL,BROWN);
	line(360+i,100+i,310+j,200+j);   // add 110 + 100 in X coordinate of Both endpoints
	line(310+i,200+i,410+j,200+j);   // of line
	line(410+i,200+i,360+j,100+j);
	line(310+i,125+i,410+j,125+j);
	line(310+i,125+i,360+j,225+j);
	line(360+i,225+i,410+j,125+j);
	circle(360+i,150,5);
	floodfill(380+i,170+j,15); // add 110 + 100 in X coordinate
	floodfill(400+i,190+j,15);
	floodfill(400+i,200+j,15);
	floodfill(340+i,130+j,15);
	floodfill(395+i,150+j,15);
	floodfill(360+i,210+j,15);
	floodfill(360+i,105+j,15);
	floodfill(340+i,190+j,15);
	setfillstyle(SOLID_FILL,RED);
	floodfill(360+i,150,15);
}

void pokeshrink() {
      int i;
     cleardevice();
       setfillstyle(SOLID_FILL,RED);
     sector(200,110,0,180,50,50);
     setfillstyle(SOLID_FILL,WHITE);
     sector(195,135,150,-42,50,50);
     setfillstyle(SOLID_FILL,BLACK);
     sector(200,110,0,180,10,10);
     sector(195,135,150,-42,10,10);
     setfillstyle(SOLID_FILL,WHITE);
     sector(200,110,0,180,5,5);
     sector(195,135,150,-42,5,5);
     delay(50);


      setfillstyle(SOLID_FILL,RED);
      //floodfill(360,360,WHITE);
     // sector(360,160,0,360,62,62);
       for( i = 20 ; i < 100 ; i+=20) {

       circle(360-2*i,160-i/2,62-i);
       floodfill(360-2*i,160-i/2,WHITE);
       delay(300);
      //floodfill(360,150,WHITE);
      //boundaryFill4(362,152,RED,WHITE);
      cleardevice();
      setfillstyle(SOLID_FILL,RED);
      sector(200,110,0,180,50,50);
      setfillstyle(SOLID_FILL,WHITE);
      sector(195,135,150,-42,50,50);
      setfillstyle(SOLID_FILL,BLACK);
      sector(200,110,0,180,10,10);
      sector(195,135,150,-42,10,10);
      setfillstyle(SOLID_FILL,WHITE);
      sector(200,110,0,180,5,5);
      sector(195,135,150,-42,5,5);
      delay(50);
      }
      cleardevice();
      pokeball(0,0,WHITE);

}


void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
	putpixel(x, y, fill_color);
	boundaryFill4(x + 1, y, fill_color, boundary_color);
	boundaryFill4(x, y + 1, fill_color, boundary_color);
	boundaryFill4(x - 1, y, fill_color, boundary_color);
	boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}

/*void pokeballytrans(int j) {

	int i,k,l=0;
	while(l<
	for(i= 0 ; i < j ; i+=10) {

	setfillstyle(SOLID_FILL,RED);
	sector(200,110+i,0,180,50,50);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,110+i,180,360,50,50);
	setfillstyle(SOLID_FILL,BLACK);
	circle(200,200,15);
	floodfill(200,200,WHITE);

	sector(200,110+i,0,180,10,10);
	sector(200,110+i,180,360,10,10);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,110+i,0,180,5,5);
	sector(200,110+i,180,360,5,5);

	delay(150);
       }
       for(i=0 ; i < j ; i+=10) {

	setfillstyle(SOLID_FILL,RED);
	sector(200,(110+i)-k,0,180,50,50);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,(110+i)-k,180,360,50,50);
	setfillstyle(SOLID_FILL,BLACK);
	circle(200,200,15);
	floodfill(200,200,WHITE);

	sector(200,(110+i)-k,0,180,10,10);
	sector(200,(110+i)-k,180,360,10,10);
	setfillstyle(SOLID_FILL,WHITE);
	sector(200,(110+i)-k,0,180,5,5);
	sector(200,(110+i)-k,180,360,5,5);

	delay(150);
       }
}
*/
void bounce() {
		int x, y = 0, j, t = 300, c = 1;

	for (x = 40; x < 400; x++) {
		cleardevice();

		pokeball(x,y,RED);

//	floodfill(x, y, BLACK);
		delay(10);

		if (y>=200){
			c=0;
			t-=20;
		}
		if (y<=(200-t)) //top to bottom
		c=1;
		y=y+(c?15:-15);
	}
}









