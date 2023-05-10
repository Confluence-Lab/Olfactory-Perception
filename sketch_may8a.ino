 //put this code for LED in the ide of arduino from this line  
   int LED = 9;  
      int ALCOHOL_sensor = 2;// MQ-6 SENSOR  
      int ALCOHOL_detected;  

      void setup()  
       {  
         Serial.begin(9600);  
         pinMode(LED, OUTPUT);  
         pinMode(ALCOHOL_sensor, INPUT);  
       }  
       void loop()  
       {  
         delay(2000);
         ALCOHOL_detected = digitalRead(ALCOHOL_sensor);  
          Serial.println(ALCOHOL_detected);
          int analog=analogRead(A1);  
          Serial.print("Analog Read: "); 
          Serial.println(analog); 
         if (analog>300)  
         {  
           Serial.println("ALCOHOL detected...");  
           digitalWrite(LED, HIGH);  
         }  
         else  
         {  
           Serial.println("No ALCOHOL detected ");  
           digitalWrite(LED, LOW);  
         }  
       }  
        