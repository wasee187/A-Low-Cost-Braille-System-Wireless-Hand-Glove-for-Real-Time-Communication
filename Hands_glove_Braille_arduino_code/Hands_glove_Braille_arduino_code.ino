  #include<SoftwareSerial.h>
  
  SoftwareSerial myConnection(0,1);

  int inPin = 8;
  int inPin1 = 9;
  void setup() {
  myConnection.begin(9600);


  pinMode(inPin, INPUT);
  pinMode(inPin1, INPUT); 
  pinMode(12, OUTPUT); 
  pinMode(11,OUTPUT); 
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);

  }

  void loop() {


  //intval = digitalRead(inPin);
  if(digitalRead(inPin) == HIGH)
    { 
      writing();
      Reading();

    }

  }


  
  void writing(){
  delay(2000);
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
  int sensorValue5 = analogRead(A5);
  float voltage0 = sensorValue0*(5.0/1023);
  float voltage1 = sensorValue1*(5.0/1023);
  float voltage2 = sensorValue2*(5.0/1023);
  float voltage3 = sensorValue3*(5.0/1023);
  float voltage4 = sensorValue4*(5.0/1023);
  float voltage5 = sensorValue5*(5.0/1023);
   // Serial.println(voltage2);
    // print out the value you read:
  if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage2 <= 3.00 && voltage3 <= 3.00 && voltage4 <= 3.00 )
  {
    myConnection.println("Q");
    delay(2000);
    //Serial.end();
  } 
   else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage3 <= 3.00 && voltage4 <= 3.00 && voltage5 <= 3.00 )
    {
      myConnection.println("Y");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage2 <= 3.00 && voltage3 <= 3.00 )
    {
      myConnection.println("G");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage3 <= 3.00 && voltage4 <= 3.00 )
    {
      myConnection.println("N");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage2 <= 3.00 && voltage4 <= 3.00 )
    {
      myConnection.println("P");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage0 <=3.00  && voltage2 <= 3.00 && voltage3 <= 3.00 && voltage4 <= 3.00 )
    {
      myConnection.println("R");
      delay(2000);
    //Serial.end();
    } 
    else if(voltage1 <=3.00  && voltage2 <= 3.00 && voltage3 <= 3.00 && voltage4 <= 3.00 )
    {
      myConnection.println("T");
      delay(2000);
      //Serial.end();
   } 
      else if(voltage0 <=3.00  && voltage2 <= 3.00 && voltage4 <= 3.00 && voltage5 <= 3.00 )
    {
        myConnection.println("V");
        delay(2000);
        //Serial.end();
    } 
      else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage4 <= 3.00 && voltage5 <= 3.00 )
    {
      myConnection.println("X");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage0 <=3.00  && voltage3 <= 3.00 && voltage4 <= 3.00 && voltage5 <= 3.00 )
    {
      myConnection.println("Z");
      delay(2000);
      //Serial.end();
    } 
    else if(voltage1 <=3.00  && voltage2 <= 3.00 && voltage3 <= 3.00 && voltage5 <= 3.00 )
  {
      myConnection.println("W");
      delay(2000);
      //Serial.end();
    } 
  else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage3 <= 3.00 )
  {
    myConnection.println("D");
    delay(2000);
    //Serial.end();
    } 
  else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage2 <= 3.00 )
  {
    myConnection.println("F");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage2 <= 3.00 && voltage3 <= 3.00 )
  {
    myConnection.println("H");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage1 <=3.00  && voltage2 <= 3.00 && voltage3 <= 3.00 )
  {
    myConnection.println("J");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage2 <= 3.00 && voltage4 <= 3.00 )
  {
    myConnection.println("L");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage1 <= 3.00 && voltage4 <= 3.00 )
  {
    myConnection.println("N");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage3 <= 3.00 && voltage4 <= 3.00 )
  {
    myConnection.println("O");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage1 <=3.00  && voltage2 <= 3.00 && voltage4 <= 3.00 )
  {
    myConnection.println("S");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage4 <= 3.00 && voltage5 <= 3.00 )
  {
    myConnection.println("U");
    delay(2000);
    //Serial.end();
  } 
  else if(voltage0 <=3.00  && voltage1 <= 3.00)
  {
    myConnection.println("C");
    delay(2000);
    //Serial.end();
  } 

  else if(voltage0 <=3.00  && voltage2 <= 3.00)
  {
    myConnection.println("B");
    delay(2000);
    //Serial.end();
  }  
    else if(voltage0 <=3.00  && voltage3 <= 3.00)
  {
    myConnection.println("E");
    delay(2000);
    //Serial.end();
  }
  else if(voltage1 <=3.00  && voltage2 <= 3.00)
  {
    myConnection.println("I");
    delay(2000);
    //Serial.end();
  }  
  else if(voltage0 <=3.00  && voltage4 <= 3.00)
  {
    myConnection.println("K");
    delay(2000);
    //Serial.end();
  }  


  else if(voltage0 <= 3.00)
  {
    myConnection.println("A");
    delay(2000);
    //Serial.end();
    }

  }

  void Reading(){
  
      String text = myConnection.readString();
  if(text == "A" || text == "a")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "B" || text == "b")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "C"|| text == "c")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "D" || text == "d")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "E" || text == "e")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "F" || text == "f")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "G" || text == "g")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "H" || text == "h")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "I" || text == "i")
        {
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "J" || text == "j")
        {
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "K" || text == "k")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "L" || text == "l")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "M" || text == "m")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "n" || text == "N")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "O" || text == "o")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "P" || text == "p")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "Q" || text == "q")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "R" || text == "r")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "s" || text == "S")
        {
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "t" || text == "T")
        {
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  delay(1000);
        }
  else if(text == "u" || text == "U")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else if(text == "V" || text == "v")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else if(text == "W" || text == "w")
        {
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else if(text == "x" || text == "X")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else if(text == "Y" || text == "y")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else if(text == "z" || text == "Z")
        {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(1000);
        }
  else
        {
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  
        }
    }
  
