
int PokeBall(int x1, int y1){
		setfillstyle(SOLID_FILL, RED);
		sector(x1,y1,0,180,60,60);
		arc(x1,y1,180,360,60);
}nt PokemonBallDriver(){
	int x, y = 0, j, t = 400, c = 1;
	
	for (x = 40; x < 602; x++) {
		cleardevice();
		sectoretop(x,y);
			
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

