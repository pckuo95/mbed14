#include"mbed.h"


BufferedSerial pc(USBTX,USBRX); //tx,rx

BufferedSerial uart(A1,A0); //tx,rx


int main(){

   uart.set_baud(9600);
   char test[1];
   test[0] = 'A';
   pc.write(test, sizeof(test));
   while(1){

      if(uart.readable()){

            char recv[1];

            uart.read(recv, sizeof(recv));

            pc.write(recv, sizeof(recv));

      }

   }

}