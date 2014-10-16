
#include "Plugin.h"

namespace plugin { namespace Bro_GeoIP { Plugin plugin; } }

using namespace plugin::Bro_GeoIP;

plugin::Configuration Plugin::Configure()
	{
	plugin::Configuration config;
	config.name = "Bro::GeoIP";
	config.description = "Geolocation information for IP addresses";
	config.version.major = 1;
	config.version.minor = 0;
	return config;
	}
