const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;
int redInt = 0, blueInt = 0, greenInt = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop() 
{
  lightShow();
}

void lightShow()
{
    while (1)
    {
      int microphone_value = analogRead(A5);
      //Serial.println(microphone_value);
      if (Serial.available() > 0) break;
    
      redInt = blueInt = greenInt = 0;
      
      if (microphone_value > 480 && microphone_value < 490)
        redInt = map(microphone_value, 480, 490, 0, 20);
      if (microphone_value > 490 && microphone_value < 520)
        blueInt = map(microphone_value, 490, 520, 0, 20);
      if (microphone_value > 520 && microphone_value < 540)
        greenInt = map(microphone_value, 520, 540, 0, 20);
      if (microphone_value > 540 && microphone_value < 600)
        redInt = greenInt = map(microphone_value, 560, 600, 0, 40);
      if (microphone_value > 600 && microphone_value < 1000)
        redInt = greenInt = map(microphone_value, 560, 1000, 0, 255);
       
      analogWrite(redPin, redInt);
      analogWrite(greenPin, greenInt);
      analogWrite(bluePin, blueInt);
    }
}