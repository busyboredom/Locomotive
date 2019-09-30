#include <Locomotive.h>

class Sandbox : public Locomotive::Application{
  public:
    Sandbox(){
    }

    ~Sandbox(){
    }
};

Locomotive::Application* Locomotive::CreateApplication(){
  return new Sandbox();
}
