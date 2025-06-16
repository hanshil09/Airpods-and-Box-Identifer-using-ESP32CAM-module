# 🎧 AirPods & Box Detection with ESP32-CAM

A lightweight object detection system built to detect AirPods and their case using the ESP32-CAM module and a TensorFlow model optimized for edge devices.

---

## 🔍 Overview

This project demonstrates real-time object detection on an embedded device. The system captures images using the ESP32-CAM, classifies them using a MobileNetV2-based deep learning model, and identifies whether the object is an AirPods case, the AirPods themselves, or none.

---

## 🧠 Model Architecture

- **Base Model**: MobileNetV2 (optimized for low-power devices)
- **Training Framework**: TensorFlow (ImageDataGenerator for data augmentation)
- **Layers Used**:
  - GlobalAveragePooling2D
  - Dense Layer (for classification)
- **Classes**: AirPods, Case, None

---

## 🧰 Tools & Libraries

- **ESP32-CAM** (for capturing real-time images)
- **Arduino IDE** with [Eloquent Arduino Library](https://github.com/eloquentarduino/EloquentTinyML) (for data collection)
- **TensorFlow/Keras** (for training the model)
- **Python** (for data preprocessing and training)
- Optional: React Native or Swift app for mobile UI integration (coming soon)

---

## 🖼️ Sample Output

> Insert image or GIF of the ESP32-CAM capturing and classifying objects here.

---

## 🔌 Hardware Setup

| ESP32-CAM Pin | USB to CS340 Module |
|---------------|-------------------|
| 5V            | 5V                |
| GND           | GND               |
| UOR (RX)      | TX                |
| UOT (TX)      | RX                |
| IO0           | GND (only during upload) |

---

## 📦 Dataset

- Custom images collected using the ESP32-CAM and Eloquent library.
- Data organized into folders for each class.
- Augmented using ImageDataGenerator.

---

## 🚀 Getting Started

1. Flash the image capture script to ESP32 using Arduino IDE.
2. Capture and label your dataset.
3. Train the model using TensorFlow.
4. Convert the model to a TensorFlow Lite format (if needed).
5. Deploy the model back to ESP32 or integrate with an app.

---

---

## 👤 Author

**Hanshil Solanki**  
[LinkedIn](www.linkedin.com/in/hanshil-solanki-9833a5252)

--
