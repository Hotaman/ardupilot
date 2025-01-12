/*
 * This file is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define HAL_INS_DEFAULT HAL_INS_MPU60XX_SPI
#define HAL_INS_MPU60x0_NAME "MPU6000"

#define HAL_BARO_DEFAULT HAL_BARO_BMP280_I2C
#define HAL_BARO_BMP280_BUS 0
#define HAL_BARO_BMP280_I2C_ADDR  (0x76)

#define ALLOW_ARM_NO_COMPASS

#define HAL_ESP32_SDCARD 1
#define HAL_OS_POSIX_IO 1
#define HAL_BOARD_LOG_DIRECTORY "/SDCARD/APM/LOGS"
#define HAL_BOARD_TERRAIN_DIRECTORY "/SDCARD/APM/TERRAIN"

#define HAL_ESP32_WIFI 1

#define HAL_ESP32_NO_MAVLINK_0 1

#define HAL_ESP32_RCIN GPIO_NUM_36

#define HAL_ESP32_RCOUT {GPIO_NUM_21}

#define HAL_ESP32_SPI_BUSES \
    {.host=VSPI_HOST, .dma_ch=1, .mosi=GPIO_NUM_23, .miso=GPIO_NUM_19, .sclk=GPIO_NUM_18},\
    {.host=VSPI_HOST, .dma_ch=1, .mosi=GPIO_NUM_23, .miso=GPIO_NUM_19, .sclk=GPIO_NUM_18}

#define HAL_ESP32_SPI_DEVICES \
    {}
    // {.name="MPU6000", .bus=0, .device=1, .cs=GPIO_NUM_5, .mode=0, .lspeed=1*MHZ, .hspeed=6*MHZ}

#define HAL_ESP32_I2C_BUSES \
    {.port=I2C_NUM_0, .sda=GPIO_NUM_26, .scl=GPIO_NUM_25, .speed=400*KHZ, .internal=false}.\
    {.port=I2C_NUM_1, .sda=GPIO_NUM_26, .scl=GPIO_NUM_25, .speed=400*KHZ, .internal=false}

#define HAL_ESP32_UART_DEVICES \
    {.port=UART_NUM_0, .rx=GPIO_NUM_3 , .tx=GPIO_NUM_1 },\
    {.port=UART_NUM_1, .rx=GPIO_NUM_35, .tx=GPIO_NUM_33}

