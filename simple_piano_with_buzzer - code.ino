int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int button6 = 7;
int button7 = 8;
int button8 = 9;

int buzzer = 13;
void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int b1 = digitalRead(button1);
  int b2 = digitalRead(button2);
  int b3 = digitalRead(button3);
  int b4 = digitalRead(button4);
  int b5 = digitalRead(button5);
  int b6 = digitalRead(button6);
  int b7 = digitalRead(button7);
  int b8 = digitalRead(button8);
  
  if (b1 == 1){
    tone(buzzer,261.6256,100);
  }
  if (b2 == 1){
    tone(buzzer,293.6648,100);
  }
  if (b3 == 1){
    tone(buzzer,329.6276,100);
  }
  if (b4 == 1){
    tone(buzzer,349.2282,100);
  }
  if (b5 == 1){
    tone(buzzer,391.9954,100);
  }
  if (b6 == 1){
    tone(buzzer,440.0000,100);
  }
  if (b7 == 1){
    tone(buzzer,493.8833,100);
  }
  if (b8 == 1){
    tone(buzzer,523.2511,100);
  }
  
  delay(10);
}