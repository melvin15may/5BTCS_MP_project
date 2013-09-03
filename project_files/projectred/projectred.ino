/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
int ll=9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(ll,OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  int hsync,vsync,sensorRed,sensorGreen,sensorBlue;
  vsync=analogRead(A3);                                  //Port A3 to read V-Sync
  Serial.write(vsync);

    hsync=analogRead(A1);                                //Port A1 to read H-Sync
    Serial.write(hsync);
    Serial.println(hsync);

      sensorRed = analogRead(A0);                      // Port A0 to read RED
      sensorGreen= analogRead(A2);                      //Port A2 to read GREEN
      sensorBlue= analogRead(A4);                      //Port A4 to read BLUE
      Serial.write(sensorRed);
   //   Serial.write(sensorGreen);
     // Serial.write(sensorBlue);

}
