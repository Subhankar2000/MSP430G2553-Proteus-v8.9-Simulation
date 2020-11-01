/*
  Software serial multple serial test
 
 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.

 The circuit: 
 * RX is digital pin P1.4 (connect to TX of other device)
 * TX is digital pin P1.3 (connect to RX of other device)
 */
#include <SoftwareSerial.h>
SoftwareSerial mySerial(P1_4, P1_3); // RX, TX

void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    int j ;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (j = i - 1; j >= 0; j--)
        mySerial.print(binaryNum[j]);
}

void setup()  
{
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("Software Serial Begin\n");
  
  uint8_t x = 2;
        uint8_t y = 4;
        uint8_t z = 8;
        mySerial.println("\r\n x value \t");
        decToBinary(x);
        mySerial.println("\r\n y value \t");
        decToBinary(y);
        mySerial.println("\r\n z value \t");
        decToBinary(z);
        mySerial.println("\r\n\r\n\r\n");
        mySerial.println("\r\n Bitwise operators in C \r\n");
        uint8_t a = 0b01000100; //68 or 0x44
        uint8_t b = 0b00100100; //36 or 0x24
        mySerial.println("\r\n value of a & b \t");
        decToBinary(a & b);
        mySerial.println("\r\n value of a | b \t");
        decToBinary(a | b);
        mySerial.println("\r\n value of a<<1 \t");
        decToBinary(a << 1);
        mySerial.println("\r\n value of a^b \t");
        decToBinary(a ^ b);
        mySerial.println("\r\n value of 1<<3 \t");
        decToBinary(1 << 3);
        mySerial.println("\r\n value of a|(1<<4) \t");
        decToBinary(a | (1 << 4));
        mySerial.println("\r\n\r\n\r\n");
}

void loop()
{
}
