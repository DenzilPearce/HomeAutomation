#include "GPIO_Wrapper.h"
#include "stm32f7xx_hal.h"

using namespace ::std;

void GPIOWrapper::SetPin(GPIOPort port, uint32_t pinNumber)
{
  GPIO_TypeDef* halPort;
  switch (port)
  {
  case GPIO_A:
      halPort = GPIOA;
    break;
    
  case GPIO_B:
      halPort = GPIOB;
    break;
  default:
    halPort = NULL;
    break;
  }
  
  HAL_GPIO_WritePin(  halPort, pinNumber, GPIO_PIN_SET);
}

void GPIOWrapper::ResetPin(GPIOPort port, uint32_t pinNumber)
{
  (void)port;
  (void)pinNumber;
}