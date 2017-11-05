#include "usb_protocol_handler.h"
#include "slave_drivers/uhk_module_driver.h"
#include "led_pwm.h"

void UsbCommand_SetLedPwmBrightness(void)
{
    uint8_t brightnessPercent = GenericHidInBuffer[1];
    LedPwm_SetBrightness(brightnessPercent);
    UhkModuleStates[UhkModuleDriverId_LeftKeyboardHalf].sourceVars.ledPwmBrightness = brightnessPercent;
}
