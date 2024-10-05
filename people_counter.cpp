#include <LiquidCrystal.h>

int client = 1;  // People counter
int TRIG = 13;   // TRIG pin of the sensor
int ECHO = 8;    // ECHO pin of the sensor


// Variables and constants to calculate the distance
int duration;
int distance;
const int DISTANCE_THRESHOLD = 45;

// LCD configuration
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup() {
  lcd_1.begin(16, 2);  // Set the columns and rows of the LCD
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  // Initial message on the LCD
  lcd_1.print("Total Clients:");
}

void loop() {
  lcd_1.setCursor(0, 1);  // Set the cursor to the second line of the LCD

  // Send a pulse to the TRIG pin
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(1);  // Small delay before the pulse
  digitalWrite(TRIG, LOW);
  delayMicroseconds(1);  // The TRIG pulse should last at least 10us

  // Read the pulse from the ECHO pin
  duration = pulseIn(ECHO, HIGH);
  distance = duration / 58.2; // Calculate distance in cm 

  // If the distance is less than the threshold, count a new person
  if (distance < DISTANCE_THRESHOLD) {
    lcd_1.setCursor(0, 1);  // Set the cursor to the second line
    lcd_1.print(client);    // Display the counter
    client += 1;            // Increment the people counter
    delay(5000);            // Delay to avoid multiple rapid counts
  }
}
