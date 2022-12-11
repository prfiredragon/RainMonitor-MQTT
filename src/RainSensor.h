#ifndef Rain_sensor_h
#define Rain_sensor_h



class Rain_sensor
{
public:

    /**
     * @brief get struct holds all the data collected from the CTRL and is populated using the update() API
     */
    struct
    {
        int wet_val ;
        int value ;
    } get;


    /**
     * @brief Construct a new Rain_sensor object
     *
     * 
     */
    Rain_sensor();

    /**
     * @brief Read the values fron the Sensor.
     *
     * 
     */
    void update();



private:


    /**
     * @brief Set the Data that are going to be sent
     */




    /**
     * @brief Get the percentage from the sensor
     */
    int WetVal();


    /**
     * @brief Get the value from the sensor. 1 for Wet and 0 for Dry.
     */
    int value();




    


};

#endif  // Rain_sensor_h