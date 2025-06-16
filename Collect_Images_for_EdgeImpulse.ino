/**
 * Collect images for Edge Impulse image classification / object detection
 * BE SURE TO SET "TOOLS > CORE DEBUG LEVEL = INFO" to turn on debug messages
 */

#define WIFI_SSID "hanshil"
#define WIFI_PASS "jiyan1234"
#define HOSTNAME "esp32cam"

#include <eloquent_esp32cam.h>
#include <eloquent_esp32cam/extra/esp32/wifi/sta.h>
#include <eloquent_esp32cam/viz/image_collection.h>

using eloq::camera;
using eloq::wifi;
using eloq::viz::collectionServer;

void setup() {
  delay(3000);
  Serial.begin(115200);
  Serial.println("___IMAGE COLLECTION SERVER___");

  // Camera settings
  camera.pinout.aithinker(); // Correct pinout for ESP32-CAM AI-Thinker
  camera.brownout.disable();
  delay(100); // Small delay after disabling brownout
  camera.resolution.qvga(); // 320x240 for lower power draw
  camera.quality.high();  // Medium quality to reduce resource usage

  // Initialize camera
  Serial.println("Initializing camera...");
  if (!camera.begin().isOk()) {
    Serial.println("Camera init failed: " + camera.exception.toString());
    while (1); // Halt on failure
  }
  Serial.println("Camera OK");

  // Connect to WiFi
  Serial.println("Connecting to WiFi...");
  if (!wifi.connect().isOk()) {
    Serial.println("WiFi failed: " + wifi.exception.toString());
    while (1); // Halt on failure
  }
  Serial.println("WiFi OK");

  // Initialize image collection server
  Serial.println("Starting image collection server...");
  if (!collectionServer.begin().isOk()) {
    Serial.println("Server failed: " + collectionServer.exception.toString());
    while (1); // Halt on failure
  }

  Serial.println("Image Collection Server OK");
  Serial.println("Access at: " + collectionServer.address());
}

void loop() {
  // Server runs in a separate thread
}