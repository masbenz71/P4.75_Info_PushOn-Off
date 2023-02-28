#include <avr/pgmspace.h>
#include "SPI.h"
#include "DMD3.h"
//#include "TimerOne.h"

#include <font/Font5x7.h>

const int buttonPin01 = A0;
const int buttonPin02 = A1;
const int buttonPin03 = A2;
const int buttonPin04 = A3;
const int buttonPin05 = A4;
const int buttonPin06 = A5;
const int buttonPin07 =  0;
const int buttonPin08 =  1;
const int buttonPin09 =  4;
const int buttonPin10 =  5;
const int buttonPin11 = 10;
const int buttonPin12 = 12;


DMD3 Disp(24, 1);

void scan()
{Disp.refresh();}

void setup()
{
  Serial.begin(9600);
  Timer1.initialize(1350);
  Timer1.attachInterrupt(scan);
  Disp.clear();
  Disp.swapBuffers();
  Disp.setFont(Font5x7);
  pinMode(buttonPin01,INPUT_PULLUP);
  pinMode(buttonPin02,INPUT_PULLUP);
  pinMode(buttonPin03,INPUT_PULLUP);
  pinMode(buttonPin04,INPUT_PULLUP);
  pinMode(buttonPin05,INPUT_PULLUP);
  pinMode(buttonPin06,INPUT_PULLUP);  
  pinMode(buttonPin07,INPUT_PULLUP);
  pinMode(buttonPin08,INPUT_PULLUP);
  pinMode(buttonPin09,INPUT_PULLUP);
  pinMode(buttonPin10,INPUT_PULLUP);
  pinMode(buttonPin11,INPUT_PULLUP);
  pinMode(buttonPin12,INPUT_PULLUP);  
  
}

void loop() {

 Info_01  () ;
 Info_02  () ;
 Info_03  () ;
 Info_04  () ;
 Info_05  () ;
 Info_06  () ;
 Info_07  () ;
 Info_08  () ;
 Info_09  () ;
 Info_10  () ;
 Info_11  () ;
 Info_12  () ;

}

void Info_01 (){
  
  int digitalVal01 = digitalRead(buttonPin01);
  if(HIGH == digitalVal01)
  {Disp.drawText(5, 4, "TIDAK ADA");}
   else
  {Disp.drawText(5, 4, "ADA");  Disp.drawFilledRect(64,15,23,0,0); }  

}



void Info_02 (){
  
  int digitalVal02 = digitalRead(buttonPin02);
  if(HIGH == digitalVal02)
  {Disp.drawText(69, 4, "TIDAK ADA");}
   else
  {Disp.drawText(69, 4, "ADA");  Disp.drawFilledRect(128,15,87,0,0); }  

}


void Info_03 (){
  
  int digitalVal03 = digitalRead(buttonPin03);
  if(HIGH == digitalVal03)
  {Disp.drawText(133, 4, "TIDAK ADA");}
   else
  {Disp.drawText(133, 4, "ADA");  Disp.drawFilledRect(192,15,151,0,0); } 

}


void Info_04 (){
  
  int digitalVal04 = digitalRead(buttonPin04);
  if(HIGH == digitalVal04)
  {Disp.drawText(197, 4, "TIDAK ADA");}
   else
  {Disp.drawText(197, 4, "ADA");  Disp.drawFilledRect(256,15,215,0,0); }  

}


void Info_05 (){
  
  int digitalVal05 = digitalRead(buttonPin05);
  if(HIGH == digitalVal05)
  {Disp.drawText(261, 4, "TIDAK ADA");}
   else
  {Disp.drawText(261, 4, "ADA");  Disp.drawFilledRect(320,15,279,0,0); } 

}


void Info_06 (){
  
  int digitalVal06 = digitalRead(buttonPin06);
  if(HIGH == digitalVal06)
  {Disp.drawText(325, 4, "TIDAK ADA");}
   else
  {Disp.drawText(325, 4, "ADA");  Disp.drawFilledRect(384,15,343,0,0); }    

}


void Info_07 (){
  
  int digitalVal07 = digitalRead(buttonPin07);
  if(HIGH == digitalVal07)
  {Disp.drawText(389, 4, "TIDAK ADA");}
   else
  {Disp.drawText(389, 4, "ADA");  Disp.drawFilledRect(448,15,407,0,0); }   

}


void Info_08 (){
  
  int digitalVal08 = digitalRead(buttonPin08);
  if(HIGH == digitalVal08)
  {Disp.drawText(453, 4, "TIDAK ADA");}
   else
  {Disp.drawText(453, 4, "ADA");  Disp.drawFilledRect(512,15,471,0,0); }  

}

void Info_09 (){
  
  int digitalVal09 = digitalRead(buttonPin09);
  if(HIGH == digitalVal09)
  {Disp.drawText(517, 4, "TIDAK ADA");}
   else
  {Disp.drawText(517, 4, "ADA");  Disp.drawFilledRect(576,15,535,0,0); }  

}


void Info_10 (){
  
  int digitalVal10 = digitalRead(buttonPin10);
  if(HIGH == digitalVal10)
  {Disp.drawText(581, 4, "TIDAK ADA");}
  else
  {Disp.drawText(581, 4, "ADA");  Disp.drawFilledRect(640,15,599,0,0); } 

}


void Info_11 (){
  
  int digitalVal11 = digitalRead(buttonPin11);
  if(HIGH == digitalVal11)
  {Disp.drawText(646, 4, "TIDAK ADA");}
   else
  {Disp.drawText(641, 4, "ADA");  Disp.drawFilledRect(704,15,663,0,0); } 

}


void Info_12 (){
  
  int digitalVal12 = digitalRead(buttonPin12);
  if(HIGH == digitalVal12)
  {Disp.drawText(709, 4, "TIDAK ADA");}
   else
  {Disp.drawText(709, 4, "ADA");  Disp.drawFilledRect(768,15,727,0,0); } 

}

