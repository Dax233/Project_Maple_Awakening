#include <Arduino.h>

// --- 枫的魔法常量定义区 ---
// 我们把要控制的LED引脚定义成一个常量，方便以后修改
// 这就像给魔法起了个名字，而不是每次都念一长串咒语
// GPIO2 是很多ESP32开发板上自带的蓝色LED灯的引脚哦！
const int LED_PIN = 2; 

// setup() 函数：这是我们的“初始化仪式”
// 它只会在ESP32上电或重启时运行一次
// 就像游戏开始前的开场CG，用来做一些准备工作
void setup() {
  // 把我们定义的LED_PIN设置为“输出模式”
  // 告诉ESP32：“喂！这个引脚以后由我发号施令，用来输出信号（点灯）！”
  pinMode(LED_PIN, OUTPUT); 
}

// loop() 函数：这是我们的“永恒心跳”
// 在setup()运行完之后，这个函数会一遍又一遍地无限循环
// 就像游戏的主循环，负责处理所有的实时逻辑
void loop() {
  digitalWrite(LED_PIN, HIGH);  // 给LED_PIN一个高电平信号，点亮LED！就像喊出“Lumos!”
  delay(1000);                  // 暂停1000毫秒（1秒），让光亮维持一会儿

  digitalWrite(LED_PIN, LOW);   // 给LED_PIN一个低电平信号，熄灭LED！就像喊出“Nox!”
  delay(1000);                  // 再暂停1秒，让黑暗也维持一会儿
}