#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H


typedef struct {
    int temperature;
    int humidity;
    int light_intensity;
    int beep_status;        //蜂鸣器状态
} sensor_data_t;


#endif