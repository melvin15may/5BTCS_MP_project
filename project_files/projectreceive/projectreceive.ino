/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
int lll=3;
int hsync=0,vsync=0,red=0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
   pinMode(lll,INPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  
  

    vsync=Serial.read();
    if(vsync!=0)
    {
      hsync=Serial.read();
      if(hsync!=0)
      {
        red = Serial.read();
      //  green = Serial.read();
        //blue = Serial.read();
        Serial.flush();  
 
      //  if (green>=137)green=255;
        //else green=0;
      //  if (blue>=137)blue=255;
        //else blue=0;
      }}
      //else
      //{
    //    red=0;
//        green=0;
  //      blue=0;
      //}
    
//    else
  //    {
    //     hsync=0;
      //   red=0;
//         green=0;
  //       blue=0;
    //   }
        
  // print out the value you read:
  analogWrite(A1,vsync);
  analogWrite(A2,hsync);
  analogWrite(A0,red);
  
  Serial.print("Vsync ::");
  Serial.print(vsync);
  Serial.println("");
  Serial.print("Hsync ::");
  Serial.print(hsync);
  Serial.println("");
  Serial.print("RED ::");
  Serial.print(red);
  Serial.println("");
//  Serial.print("GREEN ::");
  //Serial.print(green);
  //Serial.println("");
  //Serial.print("BLUE ::");
  //Serial.print(blue);
  //Serial.println("");
  

}

