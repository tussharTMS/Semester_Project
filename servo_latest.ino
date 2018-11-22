/* TESTING TO EDIT ON GITHUB */
#include <Servo.h>
char data = 0;
int a=5;
int b=6;
int c=10;
int d=3;
int e=9;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
//Variable for storing received data
void setup() 
{
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
myservo1.attach(a);
myservo2.attach(b);
myservo3.attach(c);
myservo4.attach(d);
myservo5.attach(e);

}
void loop()
{
if(Serial.available() > 0)  // Send data only when you receive data:
{
data = Serial.read();      //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");        //New line 
if(data == '1'){           //Checks whether value of data is equal to 1 
myservo1.write(180);
}
else if(data == '2'){       //Checks whether value of data is equal to 0
myservo1.write(0); 
}
else if(data == 'c'){           
  myservo2.write(180);
}

else if(data == 'd'){      
myservo2.write(0); }
else if(data == 'e'){           
  myservo3.write(180);
}

else if(data == 'f'){      
myservo3.write(0); }
else if(data == 'g'){           
  myservo4.write(180);
}

else if(data == 'h'){      
myservo4.write(0); }
else if(data == 'i'){           
  myservo5.write(180);
}

else if(data == 'j'){      
myservo5.write(0); }

}}
