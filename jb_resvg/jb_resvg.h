/*
This file is part of Resvg4JUCE.

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.

*/

/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:               jb_resvg
  vendor:           Janos Buttgereit
  version:          1.0.0
  name:             Resvg
  description:      JUCE wrapper for the resvg SVG rendering library
  website:          www.github.com/janosgit
  license:          MPL v2

  dependencies:     juce_gui_basics

  OSXLibs:          resvg
  windowsLibs:      resvg userenv

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once

#include <juce_gui_basics/juce_gui_basics.h>

#include "src/jb_ResvgRenderTree.h"
#include "src/jb_SVGComponent.h"
