#pragma once
#include "OpenKNX.h"

class WLANModule : public OpenKNX::Module
{
    bool wlanConfigured = false;
    bool usingSavedConfiguration = false;
  public:
    WLANModule();

    void setup(bool configured) override;
    void loop() override;

    const std::string name() override;
    const std::string version() override;
    void showInformations() override;
    void showHelp() override;
    bool connected();
    bool established();
    IPAddress localIP();
    IPAddress subnetMask();
    IPAddress gatewayIP();
    bool processCommand(const std::string cmd, bool diagnoseKo) override;
};

extern WLANModule openknxWLANModule;