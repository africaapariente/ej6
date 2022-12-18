/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

enum estados {Parpadeo1000msec, Parpadeo500msec, Parpadeo250msec, EsperandoPulsar, EsperandoSoltar} estado;
DigitalIn boton(PC_13);
DigitalOut led1(LED1);
Timer timer;
int contador;

void funcionParpadeo1000msec(){
        contador=0;
        while(boton=1){
        led1=!led1;
        wait_us(3000000);
        estado=EsperandoPulsar;
}
timer.reset();
timer.start();
while(boton=0||timer.read()<100){

}
if(boton=0){
    estado=EsperandoPulsar;
}
}

void funcionParpadeo500msec(){
        led1=!led1;
        wait_us(2000000);
}
void funcionParpadeo250msec(){
        led1=!led1;
        wait_us(1000000);
}
void funcionEsperandoPulsar{
    contador=contador++;
    if(boton==1){
        while
    }
    timer.reset();
    while(boton==1||timer.read()<100){
    }


}
void funcionEsperandoSoltar{

}
int main(){   
 while(1) {
     estado=Parpadeo1000msec;
        switch(estado) {
            case Parpadeo1000msec:
                funcionParpadeo1000msec();
                break;
            case Parpadeo500msec:
                funcionParpadeo500msec();
                break;
            case Parpadeo250msec:
                funcionParpadeo250msec();
                break;
            case EsperandoPulsar:
                funcionEsperandoPulsar();
                break;
            case EsperandoSoltar:
                funcionEsperandoSoltar();
                break;   
        }
    }
}
