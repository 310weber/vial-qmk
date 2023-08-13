# MCU name
MCU = STM32F401
BOARD = GENERIC_STM32_F401XC

# Bootloader selection
BOOTLOADER = stm32-dfu

# Enter lower-power sleep mode when on the ChibiOS idle thread
#OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no    # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes   # Audio control and System control(+450)
CONSOLE_ENABLE = no     # Console for debug(+400)
COMMAND_ENABLE = no     # Commands for debug and configuration
SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend
NKRO_ENABLE = no        # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no   # Enable keyboard backlight functionality
AUDIO_ENABLE = no       # Audio output
RGBLIGHT_ENABLE = yes   # Enable keyboard backlight functionality
WS2812_DRIVER = pwm		# Use PWM to offload from cpu
LTO_ENABLE = yes        # Enable link time optimization - reduces compiled firmware size (-~3000)
BLUETOOTH_ENABLE = no   # Enable Bluetooth
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = legacy

DEFAULT_FOLDER = bangbang/bangbang65/ver1

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
