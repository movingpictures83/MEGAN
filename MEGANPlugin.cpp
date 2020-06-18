#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MEGANPlugin.h"

void MEGANPlugin::input(std::string file) {
 inputfile = file;
}

void MEGANPlugin::run() {}

void MEGANPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "MEGAN -g < "+inputfile;
myCommand += " ";
std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<MEGANPlugin> MEGANPluginProxy = PluginProxy<MEGANPlugin>("MEGAN", PluginManager::getInstance());
