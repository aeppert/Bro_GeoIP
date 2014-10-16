
#ifndef BRO_PLUGIN_BRO_GEOIP
#define BRO_PLUGIN_BRO_GEOIP

#include <plugin/Plugin.h>

namespace plugin {
namespace Bro_GeoIP {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	virtual plugin::Configuration Configure();
};

extern Plugin plugin;

}
}

#endif
