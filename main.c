#include <stdio.h>
#include "pico/stdlib.h"

int main(){
    stdio_init_all();
    gpio_init(7);
    gpio_set_dir(7, false);
    gpio_init(25);
    gpio_set_dir(25, true);

    while(1) {

        char PIN1= gpio_get(7);
        char PIN2= gpio_get(25);
        
        if(PIN1==true)
        { 
            if(PIN2==true) {
                gpio_put(25,false);
            }
            else if(PIN2==false) {
                gpio_put(25,true);
            }
        }
        sleep_ms(500);
    }
}