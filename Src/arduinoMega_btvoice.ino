#define alarm_relay 11
#define fan_relay 10
#define lamp_relay 9
#define monitor_relay 8

char bluetooth_data;  
bool relayON = HIGH; bool relayOFF = LOW; // Jika anda menggunakan NO pada relay maka yang terjadi adalah Active Low, sedangkan jika anda menggunakan NC pada relay maka yang terjadi adalah Active High
      
void setup(){
  Serial.begin(9600);
  pinMode(alarm_relay, OUTPUT);
  pinMode(fan_relay, OUTPUT);
  pinMode(lamp_relay, OUTPUT);
  pinMode(monitor_relay, OUTPUT);
  digitalWrite(alarm_relay, relayOFF);
  digitalWrite(fan_relay, relayOFF);
  digitalWrite(lamp_relay, relayOFF);
  digitalWrite(monitor_relay, relayOFF); 
}

void loop(){
  if(Serial.available() > 0){
    bluetooth_data = Serial.read();
    if(bluetooth_data == '1'){
      digitalWrite(alarm_relay, relayON);
    }
    else if(bluetooth_data == '2'){
      digitalWrite(alarm_relay, relayOFF);
    }
    else if(bluetooth_data == '3'){
      digitalWrite(fan_relay, relayON);
    }
    else if(bluetooth_data == '4'){      
      digitalWrite(fan_relay, relayOFF);
    }
    else if(bluetooth_data == '5'){
      digitalWrite(lamp_relay, relayON);
    }
    else if(bluetooth_data == '6'){      
      digitalWrite(lamp_relay, relayOFF);
    }
    else if(bluetooth_data == '7'){
      digitalWrite(monitor_relay, relayON);
    }
    else if(bluetooth_data == '8'){      
      digitalWrite(monitor_relay, relayOFF);
    }
    else if(bluetooth_data == '9'){
      digitalWrite(alarm_relay, relayOFF);
      digitalWrite(fan_relay, relayOFF);
      digitalWrite(lamp_relay, relayOFF);
      digitalWrite(monitor_relay, relayOFF);
    }
  }
}
