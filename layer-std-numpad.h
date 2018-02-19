// Define the standard numpad layer
/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

KEYMAP_STACKED
  (___,      XXX, XXX,           XXX,           XXX,            XXX,        ___,
   Key_Tab,  XXX, XXX,           Key_UpArrow,   XXX,            XXX,        Key_PageUp,
   Key_Home, XXX, Key_LeftArrow, Key_DownArrow, Key_RightArrow, XXX,
   Key_End,  XXX, XXX,           XXX,           XXX,            Key_Insert, Key_PageDown,
   ___, ___, ___, ___,
   ___,

   M(MACRO_VERSION_INFO),  XXX, Key_Keypad7, Key_Keypad8,   Key_Keypad9,        Key_KeypadSubtract, ___,
   ___,                    XXX, Key_Keypad4, Key_Keypad5,   Key_Keypad6,        Key_KeypadAdd,      ___,
                           XXX, Key_Keypad1, Key_Keypad2,   Key_Keypad3,        Key_KeypadEquals,   Key_Quote,
   ___,                    XXX, Key_Keypad0, Key_KeypadDot, Key_KeypadMultiply, Key_KeypadDivide,   Key_Enter,
   ___, ___, ___, ___,
   ___)

// *INDENT-ON*
