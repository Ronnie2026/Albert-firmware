/* Firmware entry: 0x48025e8c */

char * FUN_ram_48025e8c(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0x1c) {
    return "I2S_PDM_RX_DIN2";
  }
  if (param_1 < 0x1d) {
    if (param_1 == 0xe) {
      return "I2S_STD_WS";
    }
    if (0xe < param_1) {
      if (param_1 == 0x15) {
        return "I2S_TDM_DIN";
      }
      if (param_1 < 0x16) {
        if (param_1 == 0x12) {
          return "I2S_TDM_BCLK";
        }
        if (0x12 < param_1) {
          if (param_1 != 0x13) {
            return "I2S_TDM_DOUT";
          }
          return "I2S_TDM_WS";
        }
        if (param_1 == 0x10) {
          return "I2S_STD_DIN";
        }
        if (param_1 != 0x11) {
          return "I2S_STD_DOUT";
        }
        return "I2S_TDM_MCLK";
      }
      if (param_1 == 0x19) {
        return "I2S_PDM_RX_CLK";
      }
      if (0x19 < param_1) {
        if (param_1 != 0x1a) {
          return "I2S_PDM_RX_DIN1";
        }
        return "I2S_PDM_RX_DIN0";
      }
      if (param_1 == 0x17) {
        return "I2S_PDM_TX_DOUT0";
      }
      if (param_1 != 0x18) {
        return "I2S_PDM_TX_CLK";
      }
      return "I2S_PDM_TX_DOUT1";
    }
    if (param_1 == 7) {
      return "ADC_ONESHOT";
    }
    if (7 < param_1) {
      if (param_1 == 0xb) {
        return "RMT_RX";
      }
      if (0xb < param_1) {
        if (param_1 != 0xc) {
          return "I2S_STD_BCLK";
        }
        return "I2S_STD_MCLK";
      }
      if (param_1 == 9) {
        return "LEDC";
      }
      if (param_1 != 10) {
        return "ADC_CONT";
      }
      return "RMT_TX";
    }
    if (param_1 == 3) {
      return "UART_TX";
    }
    if (3 < param_1) {
      if (param_1 == 5) {
        return "UART_RTS";
      }
      if (param_1 != 6) {
        return "UART_CTS";
      }
      return "SIGMADELTA";
    }
    if (param_1 == 1) {
      return "GPIO";
    }
    if (param_1 != 2) {
      return "INIT";
    }
    return "UART_RX";
  }
  if (param_1 == 0x2b) {
    return "SDMMC_D3";
  }
  if (0x2b < param_1) {
    if (param_1 == 0x32) {
      return "ETHERNET_MCD";
    }
    if (param_1 < 0x33) {
      if (param_1 == 0x2f) {
        return "ETHERNET_SPI";
      }
      if (0x2f < param_1) {
        if (param_1 != 0x30) {
          return "ETHERNET_CLK";
        }
        return "ETHERNET_RMII";
      }
      if (param_1 == 0x2d) {
        return "USB_DM";
      }
      if (param_1 != 0x2e) {
        return "TOUCH";
      }
      return "USB_DP";
    }
    if (param_1 == 0x36) {
      return "PPP_MODEM_RX";
    }
    if (0x36 < param_1) {
      if (param_1 == 0x37) {
        return "PPP_MODEM_RTS";
      }
      if (param_1 == 0x38) {
        return "PPP_MODEM_CTS";
      }
      return "UNKNOWN";
    }
    if (param_1 == 0x34) {
      return "ETHERNET_PWR";
    }
    if (param_1 != 0x35) {
      return "ETHERNET_MDIO";
    }
    return "PPP_MODEM_TX";
  }
  if (param_1 == 0x24) {
    return "SPI_MASTER_MOSI";
  }
  if (0x24 < param_1) {
    if (param_1 == 0x28) {
      return "SDMMC_D0";
    }
    if (0x28 < param_1) {
      if (param_1 != 0x29) {
        return "SDMMC_D2";
      }
      return "SDMMC_D1";
    }
    if (param_1 == 0x26) {
      return "SDMMC_CLK";
    }
    if (param_1 != 0x27) {
      return "SPI_MASTER_SS";
    }
    return "SDMMC_CMD";
  }
  if (param_1 == 0x20) {
    return "I2C_SLAVE_SDA";
  }
  if (0x20 < param_1) {
    if (param_1 == 0x22) {
      return "SPI_MASTER_SCK";
    }
    if (param_1 != 0x23) {
      return "I2C_SLAVE_SCL";
    }
    return "SPI_MASTER_MISO";
  }
  if (param_1 == 0x1e) {
    return "I2C_MASTER_SDA";
  }
  if (param_1 != 0x1f) {
    return "I2S_PDM_RX_DIN3";
  }
  return "I2C_MASTER_SCL";
}


