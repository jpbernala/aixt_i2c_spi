// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Juan Pablo Bernal - Daniela Mendoza Deantonio - Fernando Martinez Santa
// Date: 2024
module spi

// Finaliza el bus SPI.
@[as_macro]
pub fn end() {  
    C.SPI_END()
}