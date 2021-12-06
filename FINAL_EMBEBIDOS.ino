int t1=0, t2=1, t3=2, t4=3,v1=13,v2=12,v3=11,v4=10,vf=2, start=9, mezclador=3, tFinal=4;



void setup() {

 pinMode(t1,INPUT); pinMode(t2,INPUT);  pinMode(t3,INPUT);
 pinMode(t4,INPUT); pinMode(tFinal,INPUT); pinMode(start,INPUT);

 pinMode(v1,OUTPUT); pinMode(v2,OUTPUT); pinMode(v3,OUTPUT);
 pinMode(v4,OUTPUT); pinMode(vf,OUTPUT); pinMode(mezclador,OUTPUT);
 
}

void loop() {
  
  digitalWrite(v1,LOW);
  digitalWrite(v2,LOW);
  digitalWrite(v3,LOW);
  digitalWrite(v4,LOW);
  
  int tank1 = map(analogRead(t1),0,1023,0, 100);
  int tank2 = map(analogRead(t2),0,1023,0, 100);
  int tank3 = map(analogRead(t3),0,1023,0, 100);
  int tank4 = map(analogRead(t4),0,1023,0, 100);


 
  if(digitalRead(start)==HIGH){

       if(tank1>75){
    digitalWrite(v1,HIGH);
    }
     else{
    digitalWrite(v1,LOW);
     }

   
       if(tank2>75){
    digitalWrite(v2,HIGH);
    }
     else{
    digitalWrite(v2,LOW);
    }

    
       if(tank3>75){
    digitalWrite(v3,HIGH);
    }
     else{
    digitalWrite(v3,LOW);
    }
    
   
       if(tank4>75){
    digitalWrite(v4,HIGH);
    }
     else{
    digitalWrite(v4,LOW);
    }

    if(tank1<75 and tank2<75 and tank3<75 and tank4<75){
      digitalWrite(mezclador,HIGH);
      delay(15000);
      digitalWrite(mezclador,LOW);
      delay(500);
      last();
      }

    }
  }
  
  void last(){
   int valor = map(analogRead(tFinal),0,1023,0, 100);
          while(valor>10){
             digitalWrite(vf,HIGH);
          delay(500);
          digitalWrite(vf,LOW);
          delay(200);
          check();
      }   
    }
  void check(){
    if(map(analogRead(tFinal),0,1023,0, 100)<=10){
            digitalWrite(vf,LOW);
            delay(5000);
             loop();
            }
         }
 
