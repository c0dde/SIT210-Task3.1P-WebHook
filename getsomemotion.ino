  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(0) == HIGH) {
    String IsActive = "1";
    Particle.publish("IsActive", IsActive, PRIVATE);
  }
  else {
    String IsActive = "0";
    Particle.publish("IsActive", IsActive, PRIVATE);
  }
  delay(1000);
}


      
