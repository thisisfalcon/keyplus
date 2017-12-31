// Copyright 2017 jem@seethis.link
// Licensed under the MIT license (http://opensource.org/licenses/MIT)

#pragma once

// Turn bus switch on or off.
// Note: OE lines on FUSB42 are active LO
#define SET_BUS_SWITCH(name, value) \
    if (value) name##_PORT.OUTCLR = name##_PIN; /*enable*/ \
    else name##_PORT.OUTSET = name##_PIN; /*disable*/ \

#define GET_BUS_SWITCH(name) ((~name##_PORT.OUT) & name##_PIN)

void init_bus_switches(void);
void init_bus_switch_toggle(void);
void bus_switch_toggle_usb(void);
