
#include <DS1302.h>
#include <Servo.h>
Time t;
Servo myservo;
int Hour;
int Min;
int Sec;
// Init the DS1302
DS1302 rtc(2, 3, 4);

void setup()
{
    pinMode(5, OUTPUT);  pinMode(6, OUTPUT);
myservo.attach(9); 
myservo.write(45); 
// Set the clock to run-mode, and disable the write protection
rtc.halt(false);
rtc.writeProtect(false);
Serial.begin(9200);
// The following lines can be commented out to use the values already stored in the DS1302
//rtc.setDOW(MONDAY); // Set Day-of-Week to SUNDAY
//rtc.setTime(15,55, 30); // Set the time to 12:00:00 (24hr format)
//rtc.setDate(22, 3, 2021); // Set the date to August 25th, 2019
}

void loop()
{
     digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
  
t = rtc.getTime();
Hour = t.hour;
Min = t.min;
Sec = t.sec;
 Serial.print(Hour);
 Serial.print(":");
 Serial.print(Min);
 Serial.print(":");
 Serial.println(Sec);

//set the time for fish feeding 
if ((Hour==9 && Min==55 && Sec== 0)||(Hour== 9 && Min== 56 && Sec==00 )||(Hour== 9 && Min==57 && Sec== 0)||(Hour== 9 && Min== 58 && Sec==00 )) {
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);






myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);
myservo.write(0);
delay (800);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(150);
delay (400);
myservo.write(180);
delay (400);
myservo.write(0);
delay (800);




}

}
