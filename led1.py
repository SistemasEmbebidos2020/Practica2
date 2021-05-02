import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
led1 = 6
GPIO.setup(led1, GPIO.OUT)

for count in range(10):
  GPIO.output(led1,True)
  time.sleep(1)
  GPIO.output(led1,False)
  time.sleep(1)
