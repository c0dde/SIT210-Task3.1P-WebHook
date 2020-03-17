  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //read pin 0
  pinMode(0, INPUT);
}

void loop() {
  // if pin voltage is high
  if (digitalRead(0) == HIGH) {
    // submit the active record
    String IsActive = "1";
    Particle.publish("IsActive", IsActive, PRIVATE);
  }
   // if pin voltage is low
  else {
    // submit the inactive record
    String IsActive = "0";
    Particle.publish("IsActive", IsActive, PRIVATE);
  }
  //delay 2 seconds
  delay(2000);
}


      
