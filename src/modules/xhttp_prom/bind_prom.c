#include "bind_prom.h"
#include "prom_metric.h"

int bind_prom(prom_api_t *api)
{
	if(!api) {
		ERR("Invalid parameter value\n");
		return -1;
	}

	api->counter_create = prom_counter_create;
	api->counter_reset = prom_counter_reset;
	api->counter_inc = prom_counter_inc;
	api->gauge_create = prom_gauge_create;
	api->gauge_reset = prom_gauge_reset;
	api->gauge_inc = prom_gauge_inc;
	api->gauge_set = prom_gauge_set;
	api->histogram_create = prom_histogram_create;
	api->histogram_observe = prom_histogram_observe;
	return 0;
}
