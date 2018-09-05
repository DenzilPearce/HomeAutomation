#pragma once
#include <cstdint>


  enum GPIOPort
  {
    GPIO_A,
    GPIO_B,
    GPIO_C,
    GPIO_D
  };


class GPIOWrapper
{
  
public:
  
 // enum Port
 // {
 //   GPIO_A,
 //   GPIO_B,
 //   GPIO_C,
 //   GPIO_D
 // };
  
public:
  void SetPin(GPIOPort port, std::uint32_t pinNumber);
  void ResetPin(GPIOPort port, std::uint32_t pinNumber);
  
};