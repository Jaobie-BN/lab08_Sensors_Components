#include <stdio.h>
#include "sensor.h"
#include "esp_log.h"

static const char *TAG = "SENSOR";

void sensor_init(void) {
    ESP_LOGI(TAG, "Sensor module initialized ✅");
    // TODO: ใส่โค้ด initialize sensor hardware ที่นี่ (เช่น I2C, ADC)
}

void sensor_read_data(void) {
    ESP_LOGI(TAG, "Reading sensor data...");
    // TODO: ใส่โค้ดอ่านค่าจริงจาก sensor ที่นี่
    int value = 42; // ตัวอย่างค่า mock
    ESP_LOGI(TAG, "Sensor value: %d", value);
}

void sensor_check_status(void) {
    ESP_LOGI(TAG, "Checking sensor status...");
    // TODO: ใส่โค้ดตรวจสอบสถานะ sensor ที่นี่
    // เช่น เช็คค่าเกิน threshold หรือ error state
    bool status_ok = true; // mock result
    if (status_ok) {
        ESP_LOGI(TAG, "Sensor status: OK ✅");
    } else {
        ESP_LOGW(TAG, "Sensor status: WARNING ⚠️");
    }
}
