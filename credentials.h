#ifndef credentials_h
#define credentials_h

struct WifiCredentials {
  const char* ssid;
  const char* password;
};

WifiCredentials wifi_credentials = {
    "YOUR_WIFI_SSID",
    "YOUR_WIFI_PASSWORD"
};

#endif  // credentials_h
