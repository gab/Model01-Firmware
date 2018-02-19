// Define the ABG Apple numpad layer

/* This layer leaves the rightmost column as passthrough. It is expected that
 * Num is located under one of these keys in a lower layer.
 *
 * This layer is recommended for use with both std and abg base layers.
 *
 * The numpad is moved to be properly homed under the right hand. Zero is moved
 * to the thumb as per Kinesis. The usual non-numeric keys are arranged around
 * the tenkey in an Apple standard layout. This should be broadly compatible.
 *
 * Extra arrow keys are provided in an inverted-T under the left hand. The non-
 * mouse keys from the left hand of abg-function-inverted-t are also duplicated.
 */

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

   M(MACRO_VERSION_INFO),  XXX,                 Key_KeypadClear, Key_KeypadEquals,   Key_KeypadDivide,   Key_KeypadMultiply, ___,
   ___,                    XXX,                 Key_Keypad7,     Key_Keypad8,        Key_Keypad9,        Key_KeypadSubtract, XXX,
                           Key_Backspace,       Key_Keypad4,     Key_Keypad5,        Key_Keypad6,        Key_KeypadAdd,      XXX,
   ___,                    Key_KeypadComma,     Key_Keypad1,     Key_Keypad2,        Key_Keypad3,        Key_KeypadEnter,    XXX,
   Key_Keypad000, Key_Keypad00, Key_Keypad0, Key_KeypadDot,
   ___)

// *INDENT-ON*
