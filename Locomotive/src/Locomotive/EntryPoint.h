#pragma once

extern Locomotive::Application* Locomotive::CreateApplication();

int main(int argc, char** argv){
  Locomotive::Log::Init();
  LM_CORE_INFO("Initialized");

  auto app = Locomotive::CreateApplication();
  app->Run();
  delete app;
}
