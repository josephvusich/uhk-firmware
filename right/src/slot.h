#ifndef __SLOT_H__
#define __SLOT_H__

// A slot is a physical space that can be occupied by a module. No more than a single module
// can occupy a slot. Think of the pogo pin connector of the left keyboard half or the right
// keyboard half. Given their physical design, it's impossible to mount two modules to a slot.
//
// Slots are useful for two reasons:
// 1. Every slot has a dedicated I2C address to avoid the I2C address collision of modules.
// 2. Slots denote the maximum number of modules that can be mounted at a given time, allowing
//    for the allocation of static memory structures for modules.

// Macros:

    #define SLOT_ID_RIGHT_KEYBOARD_HALF 0
    #define SLOT_ID_LEFT_KEYBOARD_HALF  1
    #define SLOT_ID_LEFT_MODULE         2
    #define SLOT_ID_RIGHT_MODULE        3

    #define SLOT_COUNT 4

#endif
