#define SERIAL1_BEGIN(BAUD_RATE)    Serial1.begin(BAUD_RATE)
#define SERIAL1_WRITE(CHARACTER)    Serial1.write(CHARACTER) 
#define SERIAL1_READ()              Serial1.read()
#define SERIAL1_PRINT(MESSAGE)      Serial1.print(MESSAGE)
#define SERIAL1_PRINTLN(MESSAGE)    Serial1.println(MESSAGE)
#define SERIAL1_AVAILABLE()         Serial1.available()    
#define SERIAL1_PINS(tx, rx)        UART Serial1(tx, rx, 0, 0)