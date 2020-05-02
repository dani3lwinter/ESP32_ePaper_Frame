# ESP32_ePaper_Frame
Smart E-Paper frame controlled over wifi, using ESP32 and 7.5inch waveshare E-Ink display.

![Demo Image 1](https://raw.githubusercontent.com/dani3lwinter/ESP32_ePaper_Frame/master/readme%20images/img1.jpg)

## Requirements
### Libraries
- [**AsyncTCP**](https://github.com/me-no-dev/AsyncTCP) library
- [**ESPAsyncWebServer**](https://github.com/me-no-dev/ESPAsyncWebServer) library

ESP32_ePaper_Frame uses **ESPAsyncWebServer** library,  
and **AsyncTCP** is a dependency for the ESPAsyncWebServer.

Clone/download both libraries and save them to your Arduino libraries folder (usually located on _C:\\Users\\%USERPROFILE%\\Documents\\Arduino\\libraries_)

### Hardware
- ESP32 microcontroller
- 7.5inch E-Ink display with driver board for ESP32 
([Waveshare](https://www.waveshare.com/wiki/7.5inch_e-Paper_HAT_(B))).

## Installation
1. Open *Smart_ePaper_Frame.ino* file with Arduino.
2. Upload the data folder using *ESP32 Filesystem Uploader* ([Tutorial](https://randomnerdtutorials.com/install-esp32-filesystem-uploader-arduino-ide/)).
3. Upload the code to your ESP32 board.

## Usage

1. Configure your wifi credentials in the *credentials.h* file:
    ```cpp
    WifiCredentials wifi_credentials = {
        "YOUR_WIFI_SSID",
        "YOUR_WIFI_PASSWORD"
    };
    ```

2. Configure the SPI pins connected to the display driver board in the *display.h* file:
    ```cpp
    #define PIN_SPI_SCK     18
    #define PIN_SPI_DIN     23
    #define PIN_SPI_CS      5
    #define PIN_SPI_BUSY    4
    #define PIN_SPI_RST     16
    #define PIN_SPI_DC      17
    ```

3. After the program started, The IP of the board will be shown in the Serial Monitor:
    ```
    Connecting to WiFi..
    192.168.1.32
    ```

4. Browse to the given IP in your browser and upload a photo.


### More Images:
![Demo Image 2](https://raw.githubusercontent.com/dani3lwinter/ESP32_ePaper_Frame/master/readme%20images/img2.jpg)

![Dithering](https://raw.githubusercontent.com/dani3lwinter/ESP32_ePaper_Frame/master/readme%20images/dithering.png)

![Demo Image 3](https://raw.githubusercontent.com/dani3lwinter/ESP32_ePaper_Frame/master/readme%20images/img3.jpg)

