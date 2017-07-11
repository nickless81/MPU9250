#include <mpu9250.h>
/**
 * @brief MPU9250_writeByte
 * @param address
 * @param subAddress
 * @param data
 */
void     MPU9250_writeByte   (uint8_t address, uint8_t subAddress, uint8_t data)
{

}

/**
 * @brief MPU9250_readByte
 * @param address
 * @param subAddress
 * @return
 */
char     MPU9250_readByte    (uint8_t address, uint8_t subAddress)
{
    return 0;
}
/**
 * @brief MPU9250_readBytesPtr
 * @param address
 * @param subAddress
 * @param count
 * @param dest
 */
void     MPU9250_readBytesPtr(uint8_t address, uint8_t subAddress, uint8_t count, uint8_t * dest)
{

}
/**
 * @brief MPU9250_getMres
 */
void     MPU9250_getMres()
{

}
/**
 * @brief MPU9250_getGres
 */
void     MPU9250_getGres()
{

}
/**
 * @brief MPU9250_getAres
 */
void     MPU9250_getAres()
{

}
/**
 * @brief MPU9250_readAccelData
 * @param destination
 */
void     MPU9250_readAccelData   (int16_t * destination)
{

}
/**
 * @brief MPU9250_readGyroData
 * @param destination
 */
void     MPU9250_readGyroData    (int16_t * destination)
{

}
/**
 * @brief MPU9250_readMagData
 * @param destination
 */
void     MPU9250_readMagData     (int16_t * destination)
{

}
/**
 * @brief MPU9250_readTempData
 * @return
 */
int16_t  MPU9250_readTempData()
{
    return 0;
}
/**
 * @brief MPU9250_resetMPU9250
 */
void     MPU9250_resetMPU9250()
{

}
/**
 * @brief MPU9250_initAK8963
 * @param destination
 */
void     MPU9250_initAK8963      (float * destination)
{

}
/**
 * @brief MPU9250_initMPU9250
 */
void     MPU9250_initMPU9250()
{

}
/**
 * @brief MPU9250_calibrate
 * Function which accumulates gyro and accelerometer data after device initialization. It calculates the average
 * of the at-rest readings and then loads the resulting offsets into accelerometer and gyro bias registers.
 * @param dest1
 * @param dest2
 */
void     MPU9250_calibrate(float * dest1, float * dest2)
{

}
/**
 * @brief MPU9250_SelfTest
 * Accelerometer and gyroscope self test; check calibration wrt factory settings
 * Should return percent deviation from factory trim values, +/- 14 or less deviation is a pass
 * @param destination
 */
void     MPU9250_SelfTest(float * destination)
{

}
/**
 * @brief MPU9250_MadgwickQuaternionUpdate
 * Implementation of Sebastian Madgwick's "...efficient orientation filter for... inertial/magnetic sensor arrays"
 * (see http://www.x-io.co.uk/category/open-source/ for examples and more details)
 * which fuses acceleration, rotation rate, and magnetic moments to produce a quaternion-based estimate of absolute
 * device orientation -- which can be converted to yaw, pitch, and roll. Useful for stabilizing quadcopters, etc.
 * The performance of the orientation filter is at least as good as conventional Kalman-based filtering algorithms
 * but is much less computationally intensive---it can be performed on a 3.3 V Pro Mini operating at 8 MHz!
 * @param ax
 * @param ay
 * @param az
 * @param gx
 * @param gy
 * @param gz
 * @param mx
 * @param my
 * @param mz
 */
void     MPU9250_MadgwickQuaternionUpdate(float ax, float ay, float az, float gx, float gy, float gz, float mx, float my, float mz)
{

}
