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
      int microfon_value = analogRead(A5);
      //Serial.println(microfon_value);
      if (Serial.available() > 0) break;
    
      redInt = blueInt = greenInt = 0;
      
      if (microfon_value > 480 && microfon_value < 490)
        redInt = map(microfon_value, 480, 490, 0, 20);
      if (microfon_value > 490 && microfon_value < 520)
        blueInt = map(microfon_value, 490, 520, 0, 20);
      if (microfon_value > 520 && microfon_value < 540)
        greenInt = map(microfon_value, 520, 540, 0, 20);
      if (microfon_value > 540 && microfon_value < 600)
        redInt = greenInt = map(microfon_value, 560, 600, 0, 40);
      if (microfon_value > 600 && microfon_value < 1000)
        redInt = greenInt = map(microfon_value, 560, 1000, 0, 255);
       
      analogWrite(redPin, redInt);
      analogWrite(greenPin, greenInt);
      analogWrite(bluePin, blueInt);
    }
}
