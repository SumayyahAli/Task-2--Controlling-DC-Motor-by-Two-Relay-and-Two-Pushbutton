void setup() {
  
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  
}

void loop () {
  
  forward (500); 
  right(2000);
  forward(100); 
  right (500);
  forward (3000); 
  right(100);
  forward (1000); 
  
   //stop
  digitalWrite (6,LOW);
  digitalWrite (5,LOW);
  digitalWrite (4,LOW);
  digitalWrite (3,LOW);
    delay(5000);
  
  
}

void forward ( int time ) {

  digitalWrite (6,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (3,LOW);
    delay(time); 
}

void right ( int time1 ){
  digitalWrite (6,LOW);
  digitalWrite (5,HIGH);
  digitalWrite (4,LOW);
  digitalWrite (3,LOW);
    delay(time1);

}