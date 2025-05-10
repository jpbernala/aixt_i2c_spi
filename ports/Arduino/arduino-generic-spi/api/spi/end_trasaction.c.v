// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Juan Pablo Bernal - Daniela Mendoza Deantonio - Fernando Martinez Santa
// Date: 2024

module spi

// Finaliza una transacción SPI.
@[as_macro]
pub fn end_transaction() {  
    C.SPI_ENDTRANSACTION()
}