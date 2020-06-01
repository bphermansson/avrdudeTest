Here we use a simple USB-programmer and a plain Attiny processor. The connections is found at https://electronut.in/getting-started-with-attiny85-avr-programming/.  

Install software, I'm using Ubuntu:
sudo apt install gcc-avr avr-libc 

Try to compile:
make

To upload the code to the AVR the correct programmer has to be set. Which ones Avrdude support are found with this command:

avrdude -c ?

I have a AVR Pocket Programmer, googling it tells me it's a USBTinyISP based programmer. Therefor I set "AVRDUDE_PROGRAMMER = usbtiny" in the makefile. I also set "MCU = attiny45" as this is the cpu I'm using. 

