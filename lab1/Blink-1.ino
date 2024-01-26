// CSE/EE 474
// Juan Trejo and Chenyu Hu
// Lab 1 


void setup() {
  // initialize digital pins as outputs.
  //External LED
  pinMode(10, OUTPUT);
  //On-board LED
  pinMode(13, OUTPUT);
  //8-ohm speaker
  pinMode(2, OUTPUT);

}
// 1.8 Code
// Blink on-board LED @ 1000ms
/*
  void loop(){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
*/

//2.2 Code
// Blink on-board LED @200ms
/*
  void loop(){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
*/

// 3.4 Code
// Blink off-board LED @200ms
/*
  void loop(){
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    delay(200);
  }
*/

// 4.2 Code
// Blink off-board LED @200ms with speaker clicks
/*
  void loop(){
    digitalWrite(10, HIGH);
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    digitalWrite(2, LOW);
    delay(200);
  }
*/


// 4.3 Code
// Blink on-board and off-board LEDs @200ms with speaker clicks. 
  void loop() {
    digitalWrite(10, HIGH);  
    digitalWrite(13, LOW);
    digitalWrite(2, HIGH);
    delay(200);                      
    digitalWrite(10, LOW);  
    digitalWrite(13, HIGH);
    digitalWrite(2, LOW);
    delay(200);                      
  }

// 5.1 Code
// Make a tone @250Hz with LEDs flashing @200ms without audible glitch
// NOTE: This code does not work in terms of what the lab requires but it was the closest we got.
/*  
  void loop() {
    if (milli() % 200 == 0){
      digitalWrite(10, HIGH);  
      digitalWrite(13, LOW);
    } else {
      digitalWrite(10, LOW);  
      digitalWrite(13, HIGH);
    }

    if (milli() % 2 == 0){
      digitalWrite(2, HIGH);
    } else {
      digitalWrite(2, LOW);
    }             
  }
*/