#pragma once

extern Locomotive::Application* Locomotive::CreateApplication();

int main(int argc, char** argv){
  auto app = Locomotive::CreateApplication();
  app->Run();
  delete app;
}
