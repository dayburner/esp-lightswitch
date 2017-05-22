
#include <ESP8266WiFi.h>


/* WiFi Info */
const char* ssid       = "SSID";
const char* password   = "PASSWORD";

/* Hue Bridge */

const char* host = "172.17.17.104";



  int button1 = 10;
  int button2 = 13;
  int button3 = 5;
  int button4 = 4;
  int button5 = 14;
  int button6 = 2;
  int LED = 16;


  
  int button1State;
  int button2State;
  int button3State;
  int button4State;
  int button5State;
  int button6State;
  int buttonStatus;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);  


  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);


  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wifi Connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
// put your setup code here, to run once:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  button1State = digitalRead(button1);
  button2State = digitalRead(button2);
  button3State = digitalRead(button3);
  button4State = digitalRead(button4);
  button5State = digitalRead(button5);
  button6State = digitalRead(button6);
  buttonStatus = (button1State + button2State + button3State +  button4State + button5State + button6State);


  if (button1State == 0){
    Serial.print("Button 1 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/groups/0/action HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 12\r\n");
      client.print("{\"on\":false}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }

  if (button2State == 0){
    Serial.print("Button 2 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/groups/0/action HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 39\r\n");
      client.print("{\"on\":true,\"bri\":255,\"sat\":0,\"hue\":255}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }
  if (button3State == 0){
    Serial.print("Button 3 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/lights/3/state HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 12\r\n");
      client.print("{\"on\":false}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }

  if (button4State == 0){
    Serial.print("Button 4 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/lights/3/state HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 39\r\n");
      client.print("{\"on\":true,\"bri\":255,\"sat\":0,\"hue\":255}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }
  if (button5State == 0){
    Serial.print("Button 5 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/lights/2/state HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 12\r\n");
      client.print("{\"on\":false}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }

  if (button6State == 0){
    Serial.print("Button 6 pressed");
    Serial.print("connecting to ");
    Serial.println(host);

    WiFiClient client;
    const int httpPort = 80;
    
    
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }
    else {
      Serial.println("Connected to server...");
      Serial.println("Sending PUT request...");

      
      client.println("PUT /api/of3XDJb6KwSfN4qQuOwXySDy14WHM1H14w5sQw0W/lights/2/state HTTP/1.1");
      client.println("Host: 172.17.17.104");
      client.println("Connection: keep-alive");
      client.println("Content-Type: text/plain; charset=UTF-8");
      client.println("Content-Length: 39\r\n");
      client.print("{\"on\":true,\"bri\":255,\"sat\":0,\"hue\":255}");
      client.print("Referer: http://172.17.17.104/debug/clip.html");

      //read the server responce
      while(client.connected()) {
        while(client.available()){
          char ch = client.read();
          Serial.write(ch);
        }
      }
    client.stop();
    Serial.println();
    Serial.println("Disconnected");
    
    }
    
  }
  
  delay(100);
}
