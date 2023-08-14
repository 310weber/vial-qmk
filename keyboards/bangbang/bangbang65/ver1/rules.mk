## Settings should be configured in info.json where possible.
## Below settings are not defined in info.json

ENCODER_MAP_ENABLE = yes
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = legacy

DEFAULT_FOLDER = bangbang/bangbang65/ver1

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
