#include "gamelib.h"

void initGame(byte initFlags)
{
	if (initFlags & BUTTONS) {
		pinMode(START_BUTTON_PIN, INPUT_PULLUP);
  		pinMode(ACTION_BUTTON_PIN, INPUT_PULLUP);
	}
	if (initFlags & JOYSTICK) {
		pinMode(LEFT_BUTTON_PIN, INPUT_PULLUP);
		pinMode(UP_BUTTON_PIN, INPUT_PULLUP);
		pinMode(RIGHT_BUTTON_PIN, INPUT_PULLUP);
		pinMode(DOWN_BUTTON_PIN, INPUT_PULLUP);
		pinMode(CENTER_BUTTON_PIN, INPUT_PULLUP);
	}
	if (initFlags & SOUND) {
		pinMode(BUZZER_PIN, OUTPUT);
	}
	
	display.begin();
	display.setBitmapMode(0);
	Serial.begin(9600);
	randomSeed(analogRead(0));
}
