
cmake_minimum_required(VERSION 2.6.3)

project(Plugin)

include(BroPlugin)

bro_plugin_begin(Bro GeoIP)
bro_plugin_cc(src/Plugin.cc)
bro_plugin_bif(src/geoip.bif)
bro_plugin_end()
