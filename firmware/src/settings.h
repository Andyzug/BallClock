#pragma once

#include <GyverDBFile.h>
extern GyverDBFile db;

DB_KEYS(
    kk,
    wifi_ssid,
    wifi_pass,
    show_ip,

    ntp_gmt,
    ntp_host,

    bright,
    auto_bright,
    bright_min,
    bright_max,
    adc_min,
    adc_max,

    night_mode,
    night_color,
    night_trsh,

    clock_style,
    clock_color,

    back_mode,  // 0 grad, 1 perlin
    back_pal,
    back_speed,
    back_angle,
    back_scale,
    back_bright

);