char data = 0;                

const int lampu = 8;
const int kipas = 9;

void setup() {
  Serial.begin(9600);         
  pinMode(lampu, OUTPUT);
  pinMode(kipas, OUTPUT);
  digitalWrite(lampu, HIGH);   
  digitalWrite(kipas, HIGH); 
}

void loop(){
  if(Serial.available() > 0){  
    data = Serial.read();      
    Serial.print(data);        
    Serial.print("\n");        
    if(data == '1'){            
      digitalWrite(lampu, LOW); 
      digitalWrite(kipas, LOW);}
    else if(data == '2'){       
      digitalWrite(lampu, HIGH);   
      digitalWrite(kipas, HIGH);}
    else if(data == '3'){       
      digitalWrite(lampu, LOW);}
    else if(data == '4'){       
      digitalWrite(lampu, HIGH);}
    else if(data == '5'){       
      digitalWrite(kipas, LOW);}  
    else if(data == '6'){       
      digitalWrite(kipas, HIGH);}   
    else{
      digitalWrite(lampu, HIGH);
      digitalWrite(kipas, HIGH);}  
  }                            
}
