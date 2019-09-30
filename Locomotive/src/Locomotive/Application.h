#pragma once

#include "Core.h"

namespace Locomotive {

class LOCOMOTIVE_API Application {
    public:
      Application();
      virtual ~Application();

      void Run();
  };
}

