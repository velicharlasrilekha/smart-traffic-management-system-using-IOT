int GREEN   = 4000;
int YELLOW  = 1000;
int RED   = 20000;
int pir1=0;
int pir2=0;
int pir3=0;
int pir4=0;
void setup()
{
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11, INPUT);
 pinMode(12, INPUT);
 pinMode(13, INPUT);
 pinMode(A0, INPUT);
 pinMode(A1,OUTPUT);
 pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);

}
void signal_1()
{
 digitalWrite(4,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(A1,HIGH);
 digitalWrite(9,HIGH);
 delay(1000);
 digitalWrite(9,LOW);
 digitalWrite(8,HIGH);
}
void signal_2()
{
 digitalWrite(10,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(A1,HIGH);
 digitalWrite(6,HIGH);
 delay(1000);
 digitalWrite(6,LOW);
 digitalWrite(5,HIGH);
}
void signal_3()
{
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(A1,HIGH);
 digitalWrite(3,HIGH);
 delay(1000);
 digitalWrite(3,LOW);
 digitalWrite(2,HIGH);
}
void signal_4()
{
 digitalWrite(7,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(A2,HIGH);
 delay(1000);
 digitalWrite(A2,LOW);
 digitalWrite(A3,HIGH);
}
void clear()
{
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(A1,LOW);
 digitalWrite(A2,LOW);
 digitalWrite(A3,LOW);
}
    
void loop()  
{
 pir1 = digitalRead(13);
 pir2 = digitalRead(12);
 pir3 = digitalRead(11);
 pir4 = digitalRead(A0);
  
  
 
 if(pir1==HIGH)
 {
  signal_1();
  delay(5000);
  clear();
 }
 if(pir2==HIGH)
 {
  signal_2();
  delay(5000);
  clear();
 }
 if(pir3==HIGH)
 {
  signal_3();
  delay(5000);
  clear();
 }
 if(pir4==HIGH)
 {
  signal_4();
  delay(5000);
  clear();
 }

  
  
    if (pir1 == HIGH && pir2 == HIGH && pir3 == HIGH && pir4 == HIGH) 
    
 {
  signal_1();
  delay(1000);
  clear();
 
  signal_2();
  delay(1000);
  clear();
 
  signal_3();
  delay(1000);
  clear();
 
  signal_4();
  delay(1000);
  clear();
 }
    
}
