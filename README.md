# circuit-design-by-tinkercard
# Four Servo Motors Sweep

## Project Description
This project controls four servo motors using an Arduino. The servo motors perform a sweep motion for two seconds, then stop and hold at a 90-degree position.

## Components
- Arduino Uno
- 4 Servo Motors
- Jumper Wires

## Circuit Connections
- Servo 1 Signal → Pin 3
- Servo 2 Signal → Pin 5
- Servo 3 Signal → Pin 6
- Servo 4 Signal → Pin 9
- All VCC wires → 5V
- All GND wires → GND

## Program Behavior
1. All four servo motors perform a sweep motion.
2. The sweep continues for 2 seconds.
3. After 2 seconds, all servo motors stop at 90°.

## Files
- `Four_Servo_Sweep.ino` – Arduino source code.
- `README.md` – Project documentation.
- `demo.mp4` – Demonstration video.
- `image` – Circuit screenshot.

## Output
The four servo motors sweep continuously for two seconds and then remain fixed at a 90-degree angle.
