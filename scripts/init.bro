module GeoIP;

## GeoIP location information.
##
## .. bro:see:: lookup_location
type geo_location: record {
	country_code: string &optional;	##< The country code.
	region: string &optional;	##< The region.
	city: string &optional;		##< The city.
	latitude: double &optional;	##< Latitude.
	longitude: double &optional;	##< Longitude.
} &log;
