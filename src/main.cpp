using namespace std;

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "OpenEarable.h"

#include "templates.h"
#include "dtw.h"

const float test1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
const float test2[] = {2.0, 3.0, 4.0};

void setup() {
    Serial.begin(115200);
    while(!Serial);

    open_earable.begin();
    float dist = dtw_distance(test1, sizeof(test1) / sizeof(float), test2, sizeof(test2) / sizeof(float));

    Serial.print("DTW test distance: ");
    Serial.println(dist, 6);
}

void loop() {
    open_earable.update();
}