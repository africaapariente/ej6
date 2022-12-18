/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

DigitalIn boton1(PC_13);
DigitalOut led1(LED1);
Timer timer;

void funcionParpadeo1000msec(){
    led1=!led1;
    wait_us(1000000);
    if(boton==0){
        timer.reset();
        timer.start();
        while(boton==0||timer.elapsedtime().count()<1000){

        }
        timer.stop();
        estado=Parpadeo500msec;
        }

    }

void funcionParpadeo500msec(){
    led1=!led1;
    wait_us(500000);
    if(boton==0){
        timer.reset();
        timer.start();
        while(boton==0||timer.elapsedtime().count()<1000){

        }
        timer.stop();
        estado=Parpadeo250msec;
        }
}
void funcionParpadeo250msec(){
    led1=!led1;
    wait_us(250000);
    if(boton==0){
        timer.reset();
        timer.start();
        while(boton==0||timer.elapsedtime().count()<1000){

        }
        timer.stop();
        estado=Parpadeo1000msec;
        }
}

int main()
{   
 while(1) {
    estado=Parpadeo1000msec;
    switch(estado) {
            case Parpadeo1sec;
                funcionParpadeo1000msec();
                break;
            case Parpadeo500msec;
                funcionParpadeo500msec();
                break;
            case Parpadeo250msec;
                funcionParpadeo250msec();
                break;
    }
}
