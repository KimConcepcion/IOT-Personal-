
//  Array containing space for mac address:
byte mac[6];

void setup() 
{
    Serial.begin(9600);
    WiFi.on();
    waitFor(Serial.isConnected, 10000);
    
    //  Gather the mac address:
    WiFi.macAddress(mac);
    
    //  Print network info:
    Serial.printf("SSID: ");
    Serial.println(WiFi.SSID());
    
    Serial.printf("Local IP: ");
    Serial.println(WiFi.localIP());
    
    Serial.printf("Subnet mask: ");
    Serial.println(WiFi.subnetMask());
    
    Serial.printf("Gateway IP: %s");
    Serial.println(WiFi.gatewayIP());
    
    Serial.printf("Mac Address: ");
    for(int i=0; i<6; i++)
    {
        Serial.printf("%02x%s", mac[i], i != 5 ? ":" : "");
    }
}

void loop() 
{
    
}