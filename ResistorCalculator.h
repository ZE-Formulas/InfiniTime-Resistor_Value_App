#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class ResistorCalculator : public Screen {
      public:
        ResistorCalculator(DisplayApp* app);
        ~ResistorCalculator() override;
      };
    }
  }
}