# UrbanBreathe

Overview
An embedded system designed to monitor ambient air conditions in real time. It captures data on key pollutants and environmental parameters to assess air quality, classify hazard levels, and log or transmit data for analysis and response.

Working

Data Acquisition
The system uses environmental sensors to measure:

Particulate Matter (PM2.5, PM10)

Carbon Monoxide (CO)

Nitrogen Dioxide (NO₂)

Temperature and Humidity

Signal Processing
Raw analog/digital data from sensors is processed through a microcontroller. Noise is filtered out, and readings are normalized and scaled.

Air Quality Index Calculation
The processed values are mapped to standardized AQI ranges. The system calculates an overall air quality score based on pollutant concentrations using a weighted formula.

Classification
The AQI value is categorized into levels (e.g., Good, Moderate, Unhealthy). These levels guide public awareness or automated responses.

Data Handling

Logged locally to memory or SD card

Optionally transmitted to a remote server or cloud via Wi-Fi/GSM

Continuous Monitoring
The system performs regular sampling at set intervals. The loop ensures ongoing air status tracking and historical trend capture.

