#include <stdio.h>

typedef enum State{
    Sunny, Cloudy, Rainy
} State;

typedef struct Weather{
    float temp;
    float hum;
    State state;
} Weather;

int main(){
    Weather weather;
    scanf("%f %f %d", &weather.temp, &weather.hum, &weather.state);

    printf("\nTemperature: %.1f°C\nHumidity: %.1f°C\nCondtition: ", weather.temp, weather.hum);

    switch(weather.state) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }
    return 0;
}