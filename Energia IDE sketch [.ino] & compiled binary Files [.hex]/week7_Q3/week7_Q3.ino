/*
  Software serial multple serial test

  Receives from the hardware serial, sends to software serial.
  Receives from software serial, sends to hardware serial.

  The circuit:
   RX is digital pin P1.4 (connect to TX of other device)
   TX is digital pin P1.3 (connect to RX of other device)

   What is the size of an int data type?
*/
#include <SoftwareSerial.h>
SoftwareSerial mySerial(P1_4, P1_3); // RX, TX

void setup()
{
  WDTCTL = WDTPW | WDTHOLD;
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("Software Serial Begin\n");
  int x = 255;
  while (1)
  {
    mySerial.print("Size of int x is ");
    mySerial.print(sizeof(x));
    mySerial.print(" \r\n");

    int i;
    for (i = 0; i < 20000; i++);
  }
}

void loop()
{
}
