/*1 - Md Junaeid 
      16.01.04.055
  2 - Md Ruhul Amin
      16.01.04.074
*/
# include "iGraphics.h"

int mposx,  mposy;
float bird_x = 200;
float bird_y = 200;
double Back_change;
double Piller_change;
double Piller_speed;
double Collition;
double Gravity_Changer;
double Upperforce_Changer;

int t = 0;
int k = 0;

char bird[] = "pics\\bird2.bmp";
float upperforce = 18.667;
float speed = 1.0;
float gravity = speed;
float return_place = 720;

int backspeed = 50.0;
int back_X = 0;
int back_Y = 0;

float pspeed = 10.0;

char cover[1][20] = { "pics\\menu\\blue.bmp" };

char start[1][20] = {"pics\\menu\\start.bmp"};

char gameover[1][50] = { "pics\\menu\\game_over.bmp" };

char backpics[16][15] = { "pics\\b1.bmp", "pics\\b2.bmp ", "pics\\b3.bmp", "pics\\b4.bmp", "pics\\b5.bmp", "pics\\b6.bmp",
"pics\\b7.bmp", "pics\\b8.bmp", "pics\\b9.bmp", "pics\\b10.bmp", "pics\\b11.bmp",
"pics\\b12.bmp", "pics\\b13.bmp", "pics\\b14.bmp", "pics\\b15.bmp", "pics\\b16.bmp" };
char dpillerpics[8][100] = { "pics\\d1.bmp", "pics\\d2.bmp", "pics\\d3.bmp", "pics\\d4.bmp", "pics\\d5.bmp",
"pics\\d6.bmp", "pics\\d7.bmp", "pics\\d8.bmp" };
char upillerpics[8][100] = { "pics\\u1.bmp", "pics\\u2.bmp", "pics\\u3.bmp", "pics\\u4.bmp", "pics\\u5.bmp",
"pics\\u6.bmp", "pics\\u7.bmp", "pics\\u8.bmp" };




struct downpiller{
	int x;
	int y;
};          
downpiller dpil[8];

struct uppiller{
	int p;
	int q;
};
uppiller upil[8];
struct backround{
	int x;
	int y;
};
backround back[16];

/*
	function iDraw() is called again and again by the system.
*/

void restart(){
	float bird_x = 200;
	float bird_y = 200;
	double Back_change;
	double Piller_change;
	double Piller_speed;
	double Collition;
	double Gravity_Changer;
	double Upperforce_Changer;


	int t = 0;
	int k = 0;
	int l = 0;

	char bird[] = "pics\\bird2.bmp";
	float upperforce = 18.667;
	float speed = 1.0;
	float gravity = speed;
	float return_place = 720;

	int backspeed = 50.0;
	int back_X = 0;
	int back_Y = 0;

	float pspeed = 10.0;

}
void iDraw()
{
	//place your drawing codes here
	if (t == -1)
	{
		iClear();

		for (int i = 0; i < 16; i++)
		{
			iShowBMP(back[i].x, back[i].y, backpics[i]);

		}

		iShowBMP2(bird_x, bird_y, bird, 0);
		/*bird_y += gravity;
		if (bird_y < 1){
			bird_y = 1;
		}*/
		for (int i = 0; i < 8; i++)
		{
			iShowBMP2(dpil[i].x, dpil[i].y, dpillerpics[i], 0);
			iShowBMP2(upil[i].p, upil[i].q, upillerpics[i], 0);


		}
	}
	if (t == 0){
		//iShowBMP(0, 0, cover[0]);
		iShowBMP2(200, 100, start[0], 0);
		iSetColor(255, 242, 0);
		iText(250, 350, "PRESS --'SPACE'-- TO ", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (t >= 1)
	{
		iClear();

		for (int i = 0; i < 16; i++)
		{
			iShowBMP(back[i].x, back[i].y, backpics[i]);

		}

		iShowBMP2(bird_x, bird_y, bird, 0);
		bird_y -= gravity;
		if (bird_y < 1){
			bird_y = 1;
		}
		for (int i = 0; i < 8; i++)
		{
			iShowBMP2(dpil[i].x, dpil[i].y, dpillerpics[i], 0);
			iShowBMP2(upil[i].p, upil[i].q, upillerpics[i], 0);

		}
		if (t == 2 && k == 1)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 1;
		}
		if (t == 2 && k == 2)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 2;
		}
		if (t == 2 && k == 3)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 3;
		}
		if (t == 2 && k == 4)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 4;
		}
		if (t == 2 && k == 5)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 5;
		}
		if (t == 2 && k == 6)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 6;
		}
		if (t == 2 && k == 7)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 7;
		}
		if (t == 2 && k == 8)
		{
			iShowBMP(0, 0, gameover[0]);
			k = 8;
		}
	}
}


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
	void iMouseMove(int mx, int my)
{
	

	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here

 mposx = mx;
 mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == ' '){
		t = 1;
		PlaySound("sound\\flap", NULL, SND_ASYNC);
		{
			iResumeTimer(Back_change);
			iResumeTimer(Piller_change);
			iResumeTimer(Piller_speed);
			iResumeTimer(Collition);
			iResumeTimer(Gravity_Changer);
			iResumeTimer(Upperforce_Changer);
		}
		if (bird_y + upperforce >= 376)
		{
			bird_y = 376;
			gravity = (speed*1.55);

		}
		else
			{
				bird_y += (upperforce-(speed*0.5));
				gravity = (speed*1.55) ;
			}
		}
	if (key == 'r')
	{
		iResumeTimer(Back_change);
		iResumeTimer(Piller_change);
		iResumeTimer(Piller_speed);
		iResumeTimer(Collition);
		iResumeTimer(Gravity_Changer);
		iResumeTimer(Upperforce_Changer);
		bird_y = 200;
	}
	if (key == 'n')
	{
		if (k == 1)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 160;

			}
		}
		if (k == 2)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 130;

			}
		}
		if (k == 3)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 100;

			}
		}
		if (k == 4)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 140;

			}
		}
		if (k == 5)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 170;

			}
		}
		if (k == 6)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 200;

			}
		}
		if (k == 7)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 230;

			}
		}
		if (k == 8)
		{
			void restart();
			t = -1;
			{

				iPauseTimer(Back_change);
				iPauseTimer(Piller_change);
				iPauseTimer(Piller_speed);
				iPauseTimer(Collition);
				iPauseTimer(Gravity_Changer);
				iPauseTimer(Upperforce_Changer);

				bird_x = 200;
				bird_y = 200;

			}
		}
	}
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	
	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
//

void setup()
{
	int z = 0;
	for (int i = 0; i <= 16; i++)
	{
		back[i].x = z;
		back[i].y = 0;
		z += 50;
	}
}

void change()
{
	for (int i = 0; i <= 16; i++)
	{
		back[i].x -= backspeed;
		if (back[i].x < 0)
			back[i].x = 750;

	}


}

void setupdpics(){
	int z = 240;
	for (int i = 0; i < 8; i++){
		dpil[i].x = z;
		dpil[i].y = 0;
		z += 70;
	}

}
void setupupics(){
	int a = 240;
	for (int i = 0; i < 8; i++){
		upil[i].p = a;
		{
			if (i == 0)
				upil[i].q = 248;
			if (i == 1)
				upil[i].q = 218;
			if (i == 2)
				upil[i].q = 188;
			if (i == 3)
				upil[i].q = 218;
			if (i == 4)
				upil[i].q = 248;
			if (i == 5)
				upil[i].q = 278;
			if (i == 6)
				upil[i].q = 308;
			if (i == 7)
				upil[i].q = 278;
		}
		//	upil[i].q = 248;
		a += 70;
	}


}
void changepiller(){
	for (int i = 0; i < 8; i++){
		dpil[i].x -= pspeed;
		upil[i].p -= pspeed;
		if (dpil[i].x < 165)
			dpil[i].x = return_place;
		if (upil[i].p < 165)
			upil[i].p = return_place;
	}

}

void cross()
{

		if (dpil[0].x <= 200)
		if ((bird_x + 40.0) >= dpil[0].x || (bird_x + 5.0) <= dpil[0].x)
		{
			if ((bird_y < 152.0) || (bird_y > 215.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 1;
			}
		}
		if (dpil[1].x <= 200)
		if ((bird_x + 40.0) >= dpil[1].x || (bird_x + 5.0) <= dpil[1].x)
		{
			if ((bird_y <122.0) || (bird_y >185.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 2;
			}
		}
		if (dpil[2].x <= 200)
		if ((bird_x + 40.0) >= dpil[2].x || (bird_x + 5.0) <= dpil[2].x)
		{
			if ((bird_y < 92.0) || (bird_y >155.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 3;
			}
		}
		if (dpil[3].x <= 200)
		if ((bird_x + 40.0) >= dpil[3].x || (bird_x + 5.0) <= dpil[3].x)
		{
			if ((bird_y <122.0) || (bird_y > 185.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 4;
			}
		}
		if (dpil[4].x <= 200)
		if ((bird_x + 40.0) >= dpil[4].x || (bird_x + 5.0) <= dpil[4].x)
		{
			if ((bird_y <152.0) || (bird_y >215.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 5;
			}
		}
		if (dpil[5].x <= 200)
		if ((bird_x + 40.0) >= dpil[5].x || (bird_x + 5.0) <= dpil[6].x)
		{
			if ((bird_y <182.0) || (bird_y > 245.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 6;
			}
		}
		if (dpil[6].x <= 200)
		if ((bird_x + 40.0) >= dpil[6].x || (bird_x + 5.0) <= dpil[6].x)
		{
			if ((bird_y <212.0) || (bird_y >275.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 7;
			}
		}
		if (dpil[7].x <= 200)
		if ((bird_x + 40.0) >= dpil[7].x || (bird_x + 5.0) <= dpil[7].x)
		{
			if ((bird_y) < 182.0 || (bird_y > 245.0))
			{
				bird_y = 0.0;
				t = 2;
				k = 8;
			}
		}
	}

void pillerspeed(){
	pspeed += 0.5;
}
void Gravity(){
	gravity += 0.1;
}
void Upperforce(){
	upperforce += 0.1;
}
int main()
{
		setup();
		setupdpics();
		setupupics();
		Back_change = iSetTimer(200, change);
		iPauseTimer(Back_change);

		Piller_change = iSetTimer(100, changepiller);
		iPauseTimer(Piller_change);

		Piller_speed = iSetTimer(8000, pillerspeed);
		iPauseTimer(Piller_speed);

		Gravity_Changer = iSetTimer(4000, Gravity);
		iPauseTimer(Gravity_Changer);

		Upperforce_Changer = iSetTimer(4000, Upperforce);
		iPauseTimer(Upperforce_Changer);

		Collition = iSetTimer(20, cross);
		iPauseTimer(Collition);
	
	//place your own initialization codes here.
	iInitialize(800, 400, "FloopY bird");
	return 0;
}
