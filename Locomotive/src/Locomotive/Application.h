#pragma once

#include "Core.h"

namespace Locomotive {

// class LOCOMOTIVE_API Application {
class __attribute__((visibility ("default"))) Application {
    public:
      Application();
      virtual ~Application();

      void Run();
  };
}

