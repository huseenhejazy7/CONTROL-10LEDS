#include <IRremote.h>
int RECV_PIN = 12;
int buttonState ;
IRrecv irrecv(RECV_PIN);
decode_results results;
 
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode( 2, OUTPUT); 
  pinMode( 3, OUTPUT); 
  pinMode( 4, OUTPUT); 
  pinMode( 5, OUTPUT); 
  pinMode( 6, OUTPUT); 
  pinMode( 7, OUTPUT); 
  pinMode( 8, OUTPUT); 
  pinMode( 9, OUTPUT); 
  buttonState = HIGH; 
}
 
void loop() {
  
  buttonState = digitalRead(2);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(2, LOW);
        }
    if (results.value == 0xF7283C77) { 
        digitalWrite(2, HIGH); 
        } 
  
  buttonState = digitalRead(3);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(3, LOW); 
        }
    if (results.value == 0x757FB4DF) { 
        digitalWrite(3, HIGH); 
        } 
          
  buttonState = digitalRead(4);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(4, LOW); 
        }
    if (results.value == 0xB33B4597) { 
        digitalWrite(4, HIGH); 
        }   
  buttonState = digitalRead(5);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(5, LOW); 
        }
    if (results.value == 0x3C03E507) { 
        digitalWrite(5, HIGH); 
        }   
  buttonState = digitalRead(6);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(6, LOW); 
        }
    if (results.value == 0xE705551F) { 
        digitalWrite(6, HIGH); 
        }   
  buttonState = digitalRead(7);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(7, LOW); 
        }
    if (results.value == 0xA4A58EC7) { 
        digitalWrite(7, HIGH); 
        }   
  buttonState = digitalRead(8);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(8, LOW); 
        }
    if (results.value == 0xE2E45F7F) { 
        digitalWrite(8, HIGH); 
        }   
  buttonState = digitalRead(9);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(9, LOW); 
        }
    if (results.value == 0x6BACFEEF) { 
        digitalWrite(9, HIGH); 
       }   
  buttonState = digitalRead(10);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(10, LOW); 
        }
    if (results.value == 0xE88E91F) { 
        digitalWrite(10, HIGH); 
       }   
  buttonState = digitalRead(11);
        
    if (irrecv.decode(&results)) {   
    
    if (results.value == 0x7D168BCF) { 
        digitalWrite(11, LOW); 
        }
    if (results.value == 0x1A1D38BF) { 
        digitalWrite(11, HIGH);       
        }
        
    if (results.value == 0xD28EF217) { 
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);     
        digitalWrite(7, HIGH);
       
  }   
                 
  irrecv.resume(); 
  }
  
  Serial.print("");
  Serial.println(results.value, HEX); 
  delay(100);
          }
         }
        }
       }
      }
     }
    }
   } 
  }
 }
