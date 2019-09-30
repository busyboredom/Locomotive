#include <Locomotive.h>

class Sandbox : public Locomotive::Application {
  public:
    Sandbox() {
    }

    ~Sandbox() {
    }
};

int main() {
  Sandbox* sandbox = new Sandbox();

  sandbox->Run();

  delete sandbox;
}

