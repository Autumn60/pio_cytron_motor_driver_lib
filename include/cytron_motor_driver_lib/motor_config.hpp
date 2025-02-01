// Copyright 2024 Akiro Harada
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CYTRON_MOTOR_DRIVER_LIB__MOTOR_CONFIG_HPP_
#define CYTRON_MOTOR_DRIVER_LIB__MOTOR_CONFIG_HPP_

namespace cytron_motor_driver_lib
{
struct MotorConfig
{
  MotorConfig(const int magnitude_pin, const int direction_pin)
  : magnitude_pin(magnitude_pin), direction_pin(direction_pin)
  {
  }
  int magnitude_pin;
  int direction_pin;
};  // struct MotorConfig
}  // namespace cytron_motor_driver_lib

#endif  // CYTRON_MOTOR_DRIVER_LIB__MOTOR_CONFIG_HPP_
