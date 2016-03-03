#ifndef __USB_DESCRIPTOR_DEVICE_H__
#define __USB_DESCRIPTOR_DEVICE_H__

// Macros:

    #define USB_DEVICE_CLASS 0x00
    #define USB_DEVICE_SUBCLASS 0x00
    #define USB_DEVICE_PROTOCOL 0x00

    #define USB_DEVICE_SPECIFICATION_VERSION 0x0200
    #define USB_HID_VERSION 0x0100

    #define USB_DEVICE_VENDOR_ID 0x15A2
    #define USB_DEVICE_PRODUCT_ID 0x007E
    #define USB_DEVICE_RELEASE_NUMBER 0x0101

    #define USB_DEVICE_CONFIGURATION_COUNT 1
    #define USB_REPORT_DESCRIPTOR_COUNT_PER_HID_DEVICE 1
    #define USB_DEVICE_MAX_POWER 50 // Expressed in 2mA units
    #define USB_COMPOSITE_INTERFACE_COUNT (USB_KEYBOARD_INTERFACE_COUNT + \
                                           USB_MOUSE_INTERFACE_COUNT + \
                                           USB_GENERIC_HID_INTERFACE_COUNT)

    #define USB_CLASS_HID 0x03
    #define USB_HID_COUNTRY_CODE_NOT_SUPPORTED   0x00
    #define USB_INTERFACE_ALTERNATE_SETTING_NONE 0x00
    #define USB_STRING_DESCRIPTOR_NONE           0x00

    #define USB_HID_SUBCLASS_NONE 0
    #define USB_HID_SUBCLASS_BOOT 1

    #define USB_HID_PROTOCOL_NONE     0
    #define USB_HID_PROTOCOL_KEYBOARD 1
    #define USB_HID_PROTOCOL_MOUSE    2

    // Descriptor lengths

    #define USB_HID_DESCRIPTOR_LENGTH 9

// Functions:

    extern usb_status_t USB_DeviceGetDeviceDescriptor(
        usb_device_handle handle, usb_device_get_device_descriptor_struct_t *deviceDescriptor);

#endif