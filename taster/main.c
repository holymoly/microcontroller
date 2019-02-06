#define F_CPU 8000000UL
#include <avr/io.h>

int main (void){
  //define Portd as output
  DDRD = 0xFF;
  //define Portc as inputs inputs
  DDRC &= ~((1<<PC5)|(1<<PC4)|(1<<PC3));
  //define pullups
  PORTC |= (1<<PC5)|(1<<PC4)|(1<<PC3);
  //run for ever
  while(1){
    //check if pin C5 is high
    if ((PINC & (1<<PINC5))){
      //set output to high
      PORTD |= (1 << PD0);
    }
    else{
      //set output to low
      PORTD &= ~((1 << PD0));
    }
  }
}
