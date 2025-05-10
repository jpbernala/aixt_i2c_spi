// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Juan Pablo Bernal - Daniela Mendoza Deantonio - Fernando Martinez Santa
// Date: 2024

module spi

// Configura el modo de datos SPI.
@[as_macro]
pub fn set_data_mode(mode u8) {  
    C.SPI_SETDATAMODE(mode)
}