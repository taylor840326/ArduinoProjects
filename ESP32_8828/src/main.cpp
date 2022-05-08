#include <Arduino.h>

#include <ESP8266WiFi.h>


//设置需要连接的wifi的名称和密码
const char *ssid= "iXing.Family";
const char *password="18600598698";
 
void user(){
    //当调用此函数的时候打印字符串，ESP8266
    Serial.println("ESP8266");
}
 
 
void setup() {
  
  //设定通讯串口频率
  Serial.begin(9600);
  Serial.println("您使用的开发板类型:");
 
  //调用user函数，
  user();

  // WiFi.setPhyMode(WIFI_PHY_MODE_11G);
 
  //连接WIFI
  // WiFi.begin(ssid,password);
  WiFi.begin(ssid,password);
  int i =0;
 
  //如果wifi连接成功，WiFi.status()返回值则为，WL_CONNECTED
  while (WiFi.status() != WL_CONNECTED)
  {
      //设定延时1秒钟，也就是1000毫秒；
      delay(1000);
      //如果WiFi.status()返回值不等于，WL_CONNECTED，就一直循环打印i的变量每次i+1
      Serial.println(i++);
  }
  
  
  Serial.println("您的开发板的IP:");
  //当连接成功之后，向串口输出开发板的ip地址
  Serial.println(WiFi.localIP());
  
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}