#include <tlc_config.h>
#include <tlc_progmem_utils.h>
#include <tlc_fades.h>
#include <tlc_servos.h>
#include <tlc_animations.h>
#include <tlc_shifts.h>
#include <Tlc5940.h>

#include <tlc_config.h>
#include <tlc_progmem_utils.h>
#include <tlc_fades.h>
#include <tlc_servos.h>
#include <tlc_animations.h>
#include <tlc_shifts.h>
#include <Tlc5940.h>

#define ROW0 0
#define ROW1 1
#define ROW2 2
#define ROW3 4
#define ROW4 5
#define ROW5 6
#define ROW6 7
#define ROW7 8

char* AllRow[]={"ROW0","ROW1","ROW2","ROW3","ROW4","ROW5","ROW6","ROW7"};

void setup() 
{
  Tlc.init();

  pinMode(ROW0, OUTPUT);
  pinMode(ROW1, OUTPUT);
  pinMode(ROW2, OUTPUT);
  pinMode(ROW3, OUTPUT);
  pinMode(ROW4, OUTPUT);
  pinMode(ROW5, OUTPUT);
  pinMode(ROW6, OUTPUT);
  pinMode(ROW7, OUTPUT);

  digitalWrite(ROW0, LOW);
  digitalWrite(ROW1, LOW);
  digitalWrite(ROW2, LOW);
  digitalWrite(ROW3, LOW);
  digitalWrite(ROW4, LOW);
  digitalWrite(ROW5, LOW);
  digitalWrite(ROW6, LOW);
  digitalWrite(ROW7, LOW);

  int x = 4;
  int y = 4; 
}

void loop() 
{
  LedON(x,y);
}

void LedON(int x,int y)
{
	channel = x;

	Tlc.set(channel 1, 4095);

	for(int i=0; i<; i++)
	{
	    digitalWrite(AllRow[i], LOW);
	{

	digitalWrite(AllRow[channel], HIGH);

  Tlc.update();
}
