// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Authors:
//        - Juan Pablo Bernal
//        - Daniela Mendoza Deantonio
//        - Fernando M. Santa
// Date: 2024

#define SPI_BEGIN()                          SPI.begin()
#define SPI_END()                            SPI.end()
#define SPI_BEGINTRANSACTION(settings)       SPI.beginTransaction(settings)
#define SPI_ENDTRANSACTION()                 SPI.endTransaction()
#define SPI_TRANSFER(data)                   SPI.transfer(data)
#define SPI_SETBITORDER(order)               SPI.setBitOrder(order)
#define SPI_SETDATAMODE(mode)                SPI.setDataMode(mode)
#define SPI_SETCLOCKDIVIDER(divider)         SPI.setClockDivider(divider)
#define SPI_USINGINTERRUPT(interrupt_num)    SPI.usingInterrupt(interrupt_num)
#define SPI_NOTUSINGINTERRUPT(interrupt_num) SPI.notUsingInterrupt(interrupt_num)
#define SERIAL_PRINT(data)                   Serial.print(data)
