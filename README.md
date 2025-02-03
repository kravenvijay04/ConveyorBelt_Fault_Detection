# Conveyor Belt Fault Detection System

This project aims to provide an efficient solution for detecting faults in conveyor belts using advanced technologies such as computer vision, ultrasonic sensors, and machine learning. The system can identify damages, cracks, and abnormalities in conveyor belts and measure their thickness, ensuring enhanced operational efficiency, reduced downtime, and cost savings in industrial settings.
 
---
 
## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Requirements](#requirements)
- [Setup Instructions](#setup-instructions)
- [Usage](#usage)
- [Results](#results)
- [Future Scope](#future-scope)
- [Contributing](#contributing)

---

## Introduction

Conveyor belt systems are critical in industrial operations. However, faults such as tears, cracks, and thickness degradation can cause significant production losses and safety risks. This project integrates computer vision, ultrasonic sensors, and AI models to detect and diagnose these issues in real time.

   <img src="Hardware%20setup/block.png" alt="Hardware Setup Diagram" width="500"/>

---

## Features
- Real-time detection of conveyor belt damage using a camera module.
- Thickness measurement of the belt using an ultrasonic sensor.
- Automated alerts for detected faults.
- Classification of damage severity (e.g., normal, slightly damaged, moderately damaged, severely damaged).
- Data monitoring via a local webpage integrated with IoT.
- Automated system shutdown for severe faults.

---

## Technologies Used
- **Hardware**: ESP32 Camera Module, HC-SR04 Ultrasonic Sensor, Arduino Uno.
- **Software**: Python, TensorFlow, Arduino IDE, Local Webpage Dashboard.
- **AI Model**: InceptionV3 for image recognition and fault classification.

---

## Requirements
### Hardware
- ESP32 Camera Module
- HC-SR04 Ultrasonic Sensor
- Arduino Uno
- Connecting wires and breadboard
- Power supply

### Software
- Python 3.8 or above
- TensorFlow
- Arduino IDE
- Flask (for local web server)
- Arduino Cloud

---

## Setup Instructions

1. **Hardware Setup**:
   - Connect the ESP32 camera module above the conveyor belt.
   - Position the HC-SR04 ultrasonic sensor near the roller or beneath the conveyor belt.
   - Connect the components to the Arduino Uno board as per the wiring diagram in the repository.
      
        <img src="Hardware%20setup/conveyorBelt.png" alt="Hardware Setup Diagram" width="500"/>

2. **Software Setup**:
   - Clone the repository:
     ```bash
     git clone https://github.com/yourusername/conveyor-belt-fault-detection.git
     cd conveyor-belt-fault-detection
     ```
   - Install Python dependencies:
     ```bash
     pip install -r requirements.txt
     ```
   - Upload the Arduino sketch to the Arduino Uno using Arduino IDE.

3. **Train the AI Model**:
   - Prepare datasets of normal and damaged conveyor belts.
   - Use the training script to train the InceptionV3 model.
   - Save the trained model in the designated folder.

4. **Run the System**:
   - Start the local web server:
     ```bash
     python app.py
     ```
   - Open the local webpage in your browser to monitor the system in real time.

---

## Usage
- Place the camera and ultrasonic sensor as per the setup.
- Start the conveyor belt.
- Monitor real-time updates and fault detection results on the local webpage.
- Alerts and automated actions (like conveyor shutdown) will trigger upon fault detection.

---

## Results
- High accuracy (>95%) in fault detection.
- Effective thickness measurement within ±0.1mm precision.
- Automated damage classification and fault alerts.
  ### Thickness Measurement Analysis

| S.No | Constant Thickness (mm) | Measured Thickness by Sensor (mm) | Output                                  |
|------|--------------------------|------------------------------------|-----------------------------------------|
| 1    | 5.0                      | 4.8                                | Normal                                  |
| 2    | 5.0                      | 5.1                                | Normal                                  |
| 3    | 5.0                      | 4.5                                | Damaged and needs replacement           |
| 4    | 5.0                      | 4.8                                | Normal                                  |
| 5    | 5.0                      | 4.9                                | Normal                                  |
| 6    | 5.0                      | 4.9                                | Normal                                  |


---

## Future Scope
- Integration with additional sensor modalities for enhanced fault detection.
- Implementation of advanced machine learning models for improved accuracy.
- Cloud-based monitoring and analytics.
- Adaptation for various conveyor belt types and industrial settings.

---

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any improvements or new features.
