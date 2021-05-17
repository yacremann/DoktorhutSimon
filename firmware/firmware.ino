/*
  This is the firmware for the doctoral hat of Simon Daester
  
  It drives the electron source of the time resolved SEM and records the signals of the TOF detector.
  TODO: 
    * Tango-integration
    * hdf5 storage
    * new version of the program "hdf5_to_paper"
    
  The program is based on the example sketch "Blink"
*/

// The development team is very careful not to over-comment the code!

int led = 2;
void setup() {                
  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(100);              
  digitalWrite(led, LOW);    
  delay(500);               
}
