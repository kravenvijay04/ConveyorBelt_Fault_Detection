#define TRIG_PIN 9
#define ECHO_PIN 10
 
// Speed of sound in air (343.2 m/s or 0.3432 mm/µs)
const float SOUND_SPEED = 0.3432;

float ref; 
bool refEntered = false; 

void setup() {
  Serial.begin(9600);

  // Configure the trigger and echo pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Prompt the user to enter the reference value
  Serial.println("Enter the reference value (in mm):");
}

void loop() {
  if (!refEntered) {
    if (Serial.available() > 0) {
      ref = Serial.parseFloat();
      if (ref > 0) { 
        refEntered = true;
        Serial.print("Reference value set to: ");
        Serial.println(ref);
      } else {
        Serial.println("Invalid value. Please enter a positive number:");
      }
    }
    return; 
  }

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate the distance in millimeters
  float distance = (duration / 2.0) * SOUND_SPEED;
  float dis = ref - distance;

  Serial.print("Thickness of the belt: ");
  Serial.print(dis);
  Serial.println(" mm");

  // Check if replacement is needed
  float thickness = 2.00; 
  if (thickness <= dis) {
    Serial.println("No replacement is required.");
  } else {
    Serial.println("Replacement required.");
  }

  delay(200);
}
