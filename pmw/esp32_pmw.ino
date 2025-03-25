/**
 * @brief Use PMW to change brightness of LED
 * 
 * @pre
 * 	# Connect a LED to ESP32 GPIO pin 16
 *
*/


const int ledPin = 16;

//Setting PMW
const int freq = 5000; //5000 Hz
const int ledChannel = 0; //PMW channel 0 which will generate signal
const int resolution = 8; //resolution = 8 bit. It mean the duty cycle will be controlled using a value from: 0 - 255

void setup()
{
	ledCSetup(ledChannel, freq, resolution);

	//attach the channel to the GPIO
	ledcAttachPin(ledPin, ledChannel);
}

void loop()
{
	//Increase LED brightness
	for (int dutyCycle = 0; dutyCycle < 255; ++dutyCycle)
	{
		ledCWrite(ledChannel, dutyCycle);
		delay(15);
	}

	//Decrease LED brightness
	for (int dutyCycle = 255; dutyCycle > 0; --dutyCycle)
	{
		ledCWrite(ledChannel, dutyCycle);
		delay(15);
	}
}