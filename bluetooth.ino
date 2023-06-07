#define m1 13
#define m2 12
#define m3 11
#define m4 10

void setup() 
{
  Serial.begin(9600);

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);

  stop();
}

void loop() 
{
  char input = Serial.read();
  Serial.println(input);  

  // forward
  if (input == 'F') 
  {
      forward();
  }
  //backward 
  if (input == 'B') 
  {
      backward();
  }

  // right
  if (input == 'R') 
  {
      right();
  }

  //left
  if (input == 'L') 
  {
      left();
  }

  //stop
  if (input == 'S')
  {
    stop();
  }
}


void forward()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);

  Serial.println("FORWARD");
  
}
 
void backward()
{
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);

  Serial.println("BACKWARD");
}
 
void right()
{
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);

  Serial.println("RIGHT");
}
 
void left()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);

  Serial.println("LEFT");
}
 
void stop()
{
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
  
  Serial.println("STOP");
}
