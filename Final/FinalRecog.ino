int sound = 8;


void setup() 
{

  pinMode (sound, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int beat = digitalRead (sound);
  
  if (beat == 1)
  {
    Serial.println("1");
  }
  
  
}


