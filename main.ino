int BROADCAST_PIN = 4;
int BUZZER_PIN = 7;
int ERROR_PIN = 2;
int DOT_BROADCAST_DURATION = 300;
int DASH_BROADCAST_DURATION = 1500;
int PAUSE_BROADCAST_DURATION = 900;
int DELAY_BETWEEN_LETTERS_BROADCAST = 3200;
int REPEAT_BROADCAST_DELAY = 20000;
int ERROR_BROADCAST_DELAY = 120;
int ERROR_BROADCAST_REPETITIONS = 3000;
int BUZZER_TONE = 80;

enum MorseSignal {
    DOT,
    DASH
};


void setup() {
    // Serial.begin(115200);
    pinMode(BROADCAST_PIN, OUTPUT);
    pinMode(ERROR_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    String stringToBroadcast = "The cake is a lie";
    stringToBroadcast.toLowerCase();
    stringToBroadcast.replace(" ", "");
    broadcastString(stringToBroadcast, stringToBroadcast.length());
    delay(REPEAT_BROADCAST_DELAY);
}

void translateLetter(char letter, MorseSignal* translatedLetter, int* translatedLetterLength){
    switch (letter) {
        case 'a':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            *translatedLetterLength = 2;
        break;

        case 'b':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;
        
        case 'c':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DASH;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;
        
        case 'd':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            *translatedLetterLength = 3;
        break;

        case 'e':
            translatedLetter[0] = DOT;
            *translatedLetterLength = 1;
        break;

        case 'f':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DASH;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;

        case 'g':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DOT;
            *translatedLetterLength = 3;
        break;

        case 'h':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;

        case 'i':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            *translatedLetterLength = 2;
        break;

        case 'j':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DASH;
            translatedLetter[3] = DASH;
            *translatedLetterLength = 4;
        break;

        case 'k':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DASH;
            *translatedLetterLength = 3;
        break;

        case 'l':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;

        case 'm':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DASH;
            *translatedLetterLength = 2;
        break;

        case 'n':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            *translatedLetterLength = 2;
        break;

        case 'o':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DASH;
            *translatedLetterLength = 3;
        break;

        case 'p':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DASH;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;

        case 'q':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DASH;
            *translatedLetterLength = 4;
        break;

        case 'r':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DOT;
            *translatedLetterLength = 3;
        break;

        case 's':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            *translatedLetterLength = 3;
        break;

        case 't':
            translatedLetter[0] = DASH;
            *translatedLetterLength = 1;
        break;

        case 'u':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DASH;
            *translatedLetterLength = 3;
        break;

        case 'v':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DASH;
            *translatedLetterLength = 4;
        break;

        case 'w':
            translatedLetter[0] = DOT;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DASH;
            *translatedLetterLength = 3;
        break;

        case 'x':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DASH;
            *translatedLetterLength = 4;
        break;

        case 'y':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DOT;
            translatedLetter[2] = DASH;
            translatedLetter[3] = DASH;
            *translatedLetterLength = 4;
        break;

        case 'z':
            translatedLetter[0] = DASH;
            translatedLetter[1] = DASH;
            translatedLetter[2] = DOT;
            translatedLetter[3] = DOT;
            *translatedLetterLength = 4;
        break;
        
        default:
            broadcastError();
    }
}

void beep(int beepDuration){
    for( int i = 0; i < (int)(beepDuration / (BUZZER_TONE * 0.002)); i++){
        digitalWrite(BUZZER_PIN , HIGH);
        delayMicroseconds(BUZZER_TONE);
        digitalWrite(BUZZER_PIN, LOW );
        delayMicroseconds(BUZZER_TONE);
    }
}

void broadcastSingularSignal(int pinNumber, int broadcastDuration){
    digitalWrite(pinNumber, HIGH);
    beep(broadcastDuration);
    digitalWrite(pinNumber, LOW);
    delay(PAUSE_BROADCAST_DURATION);
}

void broadcastLetter(MorseSignal* translatedLetter, size_t letterLength) {
    MorseSignal morseSignal;

    for(int i = 0; i < letterLength; i++){
        morseSignal = translatedLetter[i];

        switch (morseSignal) {
        case DOT:
            broadcastSingularSignal(BROADCAST_PIN, DOT_BROADCAST_DURATION);
            break;

        case DASH:
            broadcastSingularSignal(BROADCAST_PIN, DASH_BROADCAST_DURATION);
            break;
        }
    }
}

void broadcastString(String stringToBroadcast, size_t stringLength){
    MorseSignal* translatedLetter = malloc(4 * sizeof(MorseSignal));
    int* translatedLetterLength;

    for (int i = 0; i < stringLength; i++){
        translateLetter(stringToBroadcast[i], translatedLetter, translatedLetterLength);
        broadcastLetter(translatedLetter, *translatedLetterLength);
        delay(DELAY_BETWEEN_LETTERS_BROADCAST);
    }
}

void broadcastError(){
    for(int i = 0; i < ERROR_BROADCAST_REPETITIONS; i++){
        digitalWrite(ERROR_PIN, HIGH);
        delay(ERROR_BROADCAST_DELAY);
        digitalWrite(ERROR_PIN, LOW);
        delay(ERROR_BROADCAST_DELAY);
    }
}
