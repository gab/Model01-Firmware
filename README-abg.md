ABG firmware variant layout
===========================

This repository contains alternative layer files that vary the default 
keyboardio firmware layout to make multilingual typing more intuitive and
fix a selection of annoyances.

While the modifications can be applied individually, it is recommended
that aliases-abg-orphans-* not be used without also enabling one of
the abg-function-* layers, so that PgUp, PgDn and Num remain accessible.

How to use
----------

Follow the instructions in the README.md file, but instead of cloning
`keyboardio/Model01-Firmware`, clone `andrewgdotcom/Model01-Firmware`.
Otherwise the steps are identical.

To enable/disable the modifications, edit the include directives in 
`keymaps.h`.

The Changes
===========

The Numpad Layer
----------------

### layer-std-numpad.h

* The stock firmware numpad layer is implemented

### layer-abg-numpad-apple.h

* Numpad is properly homed as per e.g. Kinesis and implements the standard Apple
	keypad layout for the non-numeric keys. It also fixes a bug where
	the keypad generated Equals (which varies with OS keymap) rather than
	the more invariant code KP_Equals. It also adds an extra Backspace key.

The Function Layer
------------------

### layer-std-function.h

* The stock firmware function layer is implemented

### layer-abg-function-minimal-changes.h

* Duplicate keys are created on the Fn layer to free up space on the base layer:

	* Page Up/Down keys are duplicated on Fn-Tab and Fn-Escape.
	* Num is duplicated on Fn-C15R2 (the middle rightmost key).

### layer-abg-function-inverted-t.h

* Duplicate keys are created on the Fn layer to free up space on the base layer:

	* Page Up/Down keys are duplicated on Fn-Tab and Fn-Escape.
	* Num is duplicated on Fn-C15R3 (the bottom rightmost key).
		(The magic pipe key is moved to C13R3).

* Arrow keys are homed as an inverted-T under "IJKL", rather than in `vi` format.
	* Right-curlybrace is moved to C14R2

* Mousekeys are properly homed as an inverted-T under the first three fingers.
	The warp buttons are arranged in a square around the inverted-T.
	Left-button is under the left pinky so that it can be held down easily
	for drag and drop while the inverted-T and warp buttons are operated by
	the first three fingers. Right and middle buttons are placed by analogy.
	Insert is displaced, and is relocated under "B" to be close to Delete.

* Mouse scroll keys are added - traditional or "natural" scrolling is 
	configurable by the `aliases-abg-scroll-wheel-*` include files.

The Base Layer
--------------

The base layer is parameterized and controlled by the inclusion of a
set of alias files. Currently the two supported alias classes are
`orphans` and `modifiers`. One include file from each class must be
enabled.

### Orphans

The `orphans` files control the rearrangement of scancodes from the
columns to the right of 0 and P on a standard keyboard, for which there
is not enough room on the Model01. These orphaned scancodes are ANSI
Minus, Equals, LeftBracket, RightBracket and Backslash.
NonUsBackslashAndPipe is also handled here as it is absent from the
default Model01 layout, but is required for non-US keymaps.

#### aliases-std-orphans.h

* The stock firmware layout is implemented.

#### aliases-abg-orphans-abg.h

* The ABG/Celtic international layout is implemented:

	* Page Up/Down become "\\|" and "<>" (the "international key")
	* Any and Num become "-_" and "=+"
	* "-_" and "=+" become "[{" and "]}"

Note that this requires the use of a nonstandard function layer.

#### aliases-abg-orphans-spanish.h

* As above, but ANSI brackets, backslash and equals are permuted for 
	easier use with Spanish, Brazilian, Swiss and Slovak OS keymaps
	
Note that this requires the use of a nonstandard function layer.

### Modifiers

The `modifiers` files control the arrangement of modifier keys. These
are the two palm keys, the eight thumb keys, and the bottom two keys
in the extra centre columns. None of these keys has an analogue on a
standard keyboard, and so their placement is essentially arbitrary.

#### aliases-std-modifiers.h

* The stock firmware layout is implemented

#### aliases-abg-modifiers.h

* The thumb buttons and butterfly key are rearranged:

	* Butterfly is now Command/GUI
	* Command/GUI and Alt (L/R THUMB_2) become the Shift keys
	* The Shift keys (L/R THUMB_3) become Left-Alt and Right-Alt (=AltGr)
		This better facilitates touch-typing with AltGr

#### aliases-abg-modifiers-thumb-enter.h

* As above, but right THUMB_2 is now Enter/Return, and Del is mapped
	where Enter was.

The layer definitions
=====================

Base layer with orphans-abg and modifiers-abg
---------------------------------------------

```
Prg 1!  2@  3#  4$  5%  LED    -_  6^  7&  8*  9(  0)  =+
`~  Q   W   E   R   T   Tab    Ret Y   U   I   O   P   [{
\|  A   S   D   F   G              H   J   K   L   ;:  '"
<>  Z   X   C   V   B   Esc    Cmd N   M   ,<  .>  /?  ]}
            Ctl Bs  Sh  Alt    Alt Sh  Sp  Ctl
```

Base layer with orphans-abg-spanish and modifiers-abg
-----------------------------------------------------

```
Prg 1!  2@  3#  4$  5%  LED    -_  6^  7&  8*  9(  0)  ]}
`~  Q   W   E   R   T   Tab    Ret Y   U   I   O   P   [{
=+  A   S   D   F   G              H   J   K   L   ;:  '"
<>  Z   X   C   V   B   Esc    Cmd N   M   ,<  .>  /?  \|
            Ctl Bs  Sh  Alt    Alt Sh  Sp  Ctl
```

ABG Numpad Apple
----------------

```
___ ___ ___ ___ ___ ___ ___    VER ___ Clr =   /   *   ___
Tab ___ ___ Up  ___ ___ PUp    ___ ___ 7   8   9   -   ___
Hom ___ Le  Dn  Ri  ___            Bs  4   5   6   +   ___
End ___ ___ ___ ___ Ins PDn    ___ ___ 1   2   3   Ent ___
            ___ ___ ___ ___    ___ ___ 0   .
```

ABG Function Inverted-T
-----------------------

```
___ F1  F2  F3  F4  F5  LED    Pre F6  F7  F8  F9  F10 F11
Tab ScU MNW MUp MNE MWE PUp    Pla Nxt {   Up  [   ]   F12
Hom LBu MLe MDn MRi RBu            PSc Le  Dn  Ri  }   ___
End ScD MSW MBu MSE Ins PDn    App Mut V+  V-  |   \   Num
            ___ Del ___ ___    ___ ___ Ret ___
```

ABG Function Minimal Changes
----------------------------

```
___ F1  F2  F3  F4  F5  LED    Pre F6  F7  F8  F9  F10 F11
Tab ___ MUp PUp RBu MWE MNE    Pla Nxt {   }   [   ]   F12
Hom MLe MDn MRi LBu MNW            Le  Dn  Up  Ri  ___ Num
End PSc Ins PDn MBu MSW MSE    App Mut V+  V-  ___ \   |
            ___ Del ___ ___    ___ ___ Ret ___
```
