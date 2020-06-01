Here we use a simple USB-programmer and a plain Attiny processor. The connections is found at https://electronut.in/getting-started-with-attiny85-avr-programming/. I also use a resistor and a led connected to pin 3 on the Attiny. 

Install software, I'm using Ubuntu:
sudo apt install gcc-avr avr-libc 

To upload the code to the AVR the correct programmer has to be set. Which ones Avrdude support are found with this command:

avrdude -c ?

I have a AVR Pocket Programmer, googling it tells me it's a USBTinyISP based programmer. Therefor I set "AVRDUDE_PROGRAMMER = usbtiny" in the makefile. I also set "MCU = attiny45" as this is the cpu I'm using. 

Then try to compile and upload:
make

If everything works the code uploads and the led starts to blink.

