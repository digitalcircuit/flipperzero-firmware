#include <furi.h>
#include <furi_hal.h>

void power_limit_charge_on_system_start() {
    // Limit battery charge voltage for testing purposes
    furi_hal_power_set_battery_charge_voltage_limit(3.904f);
}
