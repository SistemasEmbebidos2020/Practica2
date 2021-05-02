#!/usr/bin/env python3

import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)

led1 = 6
Bt1 = 5
GPIO.setup(Bt1, GPIO.IN, GPIO.PUD_DOWN)
GPIO.setup(led1, GPIO.OUT)

 
# Main function
def main () :
 while 1 :
  if GPIO.input(Bt1):
   GPIO.output(led1,True)
  else:
   GPIO.output(led1,False)
  
# Command line execution
if __name__ == '__main__' :
   main()
