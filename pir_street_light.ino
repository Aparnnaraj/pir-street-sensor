
int led= 3;
int pir= 2;
 
 
int ldr_value;
int pir_value;

void setup() {

  pinMode(led, OUTPUT);
  pinMode (pir, INPUT);

  Serial.begin(9600);
  
  
  }

void loop() {

    ldr_value= analogRead(A0);
    pir_value= digitalRead(pir);

    if(ldr_value<200 || pir_value== HIGH) {
      

      digitalWrite(led, HIGH);
      Serial.println(" Motion Detected ");
      delay(100);
      
      } else {
        
        digitalWrite(led, LOW);
        Serial.println(" Motion Stopped ");
        delay(100);
        
        }
        Serial.print(" LDR value is: ");
        Serial.println(ldr_value);
        delay(100);


  }
