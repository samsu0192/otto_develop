#include <DFRobot_HT1632C.h>
#include <Servo.h>
#include <Oscillator.h>
#include <US.h>
#include <Otto.h>
#define PIN_YL 2 
#define PIN_YR 3 
#define PIN_RL 8 
#define PIN_RR 9
#define DATA 11
#define CS 10
#define WR 12
Otto Otto;

DFRobot_HT1632C ht1632c = DFRobot_HT1632C(DATA, WR,CS);

byte shiName[] = { B00000000,B01111110,B00001000,B00010000,B00011110,B00110010,B01010010,B10011110};
byte heartName[] = { B00000000,B01101110,B11111111,B11111111,B11111111,B01111110,B00111100,B00011000};
byte touName[] = { B00000000,B00101000,B01011000,B00101000,B01111110,B00011000,B00100100,B01000010};
byte smileeye[] = { B00000000,B00011000,B00100100,B01000010,B00000000,B00000000,B00000000,B00000000};
byte smilemouth[] = { B00000000,B00000000,B00000000,B01000010,B01000010,B00100100,B00011000,B00000000};
void putSprite(byte spriteName[],int beginning)
{
   for(uint8_t x=0; x<8; x++){
    for(uint8_t y=0; y<8; y++){
      if (spriteName[y]>> x & 1)
      ht1632c.setPixel(8-x+beginning,y);   
    }
  }
  }

  void putGraph(byte Name1[],byte Name2[], byte Name3[])
{
  putSprite(Name1,0);
  putSprite(Name2,8);
  putSprite(Name3,16);
  }

  //emoji counter,touch counter
long counter[]={0,0}
//emoji triger,touch triger
int trigger[]={0,0};
//emoji interval, touch interval
long interval[]={5000,0};
  void defaultEmojiLoop(long counter[],int trigger[],long interval[]){
  int i=0;
  unsigned long time = millis();
  if 
  ht1632c.clearScreen();
    }

void setup(){
 Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
 Otto.home();
 ht1632c.begin();
 ht1632c.isLedOn(true);
 ht1632c.clearScreen();
 delay(50);
  }

volid
  void loop(){
    ht1632c.clearScreen();
    putSprite(shiName,0);
    putSprite(touName,16);
    putSprite(heartName,8);
    ht1632c.writeScreen();
    delay(5000);
    ht1632c.clearScreen();
    putGraph(smileeye,smilemouth,smileeye);
    ht1632c.writeScreen();
    delay(5000);
    }
