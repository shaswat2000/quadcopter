int RF = 11;
int RB = 10;
int LF = 9;
int LB = 6;
char input, input0;
int pwmRF= 5;
int pwmRB= 4;
int pwmLF= 3;
int pwmLB= 2;
void setup() {

 pinMode(13, OUTPUT);
 Serial.begin(9600);
 pinMode(RF, OUTPUT);
 pinMode(LF, OUTPUT);
 pinMode(LB, OUTPUT);
 pinMode(RB, OUTPUT);
 pinMode(pwmRF, OUTPUT);
 pinMode(pwmLF, OUTPUT);
 pinMode(pwmLB, OUTPUT);
 pinMode(pwmRB, OUTPUT);
 digitalWrite(RF, LOW);
 digitalWrite(LF, LOW);
 digitalWrite(LB, LOW);
 digitalWrite(RB, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available()> 0)
  {
   input=Serial.read();
   if (input=='u')
    {
     up();
     input0='u';
    }
    else if (input=='d')
    {
     down();
     input0='u';  
    }
    else if (input=='r')
    {
     right();  
     input0='u';
    }
    else if (input=='l')
    {
     left();
     input0='u';  
    }
    else if (input=='f')
    {
     forward();  
     input0='u';
    }
    else if (input=='b')
    {
     backward();
     input0='u';  
    }
    else if (input=='s')
    {
     still();
     input0='u';  
    }
    
  }
}
void up()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255); 
}
void down()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 80);
 analogWrite(pwmLF, 80);
 analogWrite(pwmLB, 80);
 analogWrite(pwmRB, 80); 
}
void forward()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255); 
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255); 
}
void backward()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155);
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255);  
}
void left()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 255);
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255);    
}
void right()
{
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 155);
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255);      
}
void still()
{
   if (input0=='u')
   {
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 80);
 analogWrite(pwmLF, 80);
 analogWrite(pwmLB, 80);
 analogWrite(pwmRB, 80); 
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155); 
   }
   else if(input0=='d')
 {digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF,255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255);
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155); 
 }
 else if(input0== 'f')
 {
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 80);
 analogWrite(pwmRB, 80);  
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155); 
 }
 else if(input0== 'b')
 {
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 80);
 analogWrite(pwmLF, 80);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255);  
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155); 
 }
 else if(input0=='r')
 {
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 80);
 analogWrite(pwmLB, 80);
 analogWrite(pwmRB, 255);
 delay(100);
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 155);
 analogWrite(pwmLF, 155);
 analogWrite(pwmLB, 155);
 analogWrite(pwmRB, 155);  
 }
 else if(input0=='l')
 {
 digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 80);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 80);  
 delay(100);
  digitalWrite(RF, HIGH);
 digitalWrite(LF, HIGH);
 digitalWrite(LB, HIGH);
 digitalWrite(RB, HIGH);
 analogWrite(pwmRF, 255);
 analogWrite(pwmLF, 255);
 analogWrite(pwmLB, 255);
 analogWrite(pwmRB, 255); 
 }
}
