// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Juan Pablo Bernal - Daniela Mendoza Deantonio - Fernando Martinez Santa
// Date: 2024

module spi

// Imprime datos en el puerto serie.
@[as_macro]
pub fn print(data string) {  
    C.SERIAL_PRINT(data)
}