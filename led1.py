#!/usr/bin/env python3

import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(GPIO.BCM)

led1 = 6
Bt1 = 5
GPIO.setup(Bt1, GPIO.IN, GPIO.PUD_DOWN)
GPIO.setup(led1, GPIO.OUT)

 
# Main function
def main () :
 for count in range(10):
  GPIO.output(led1,True)
  sleep(1)
  GPIO.output(led1,False)
  sleep(1)
  
# Command line execution
if __name__ == '__main__' :
   main()
