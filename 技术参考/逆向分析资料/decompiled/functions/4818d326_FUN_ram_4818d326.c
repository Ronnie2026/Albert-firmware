/* Firmware entry: 0x4818d326 */

int FUN_ram_4818d326(uint param_1,uint param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 - 9 & 0xff) < 0x18) {
    if ((0x80001bU >> (param_2 - 9 & 0x1f) & 1) != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    if (param_1 != 0x1d) {
      if (0x1d < param_1) {
LAB_ram_4818d3a4:
        if (param_1 == 0x21) {
          if (((uint)(byte)(&DAT_ram_4823a92c)[param_2 >> 3] & 1 << (param_2 & 7)) != 0) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0x22;
          }
          if (param_2 == 0x23) {
            return 0x21;
          }
        }
        else {
          if (param_1 < 0x22) {
            if (param_1 == 0x1e) {
              if (((uint)(byte)(&DAT_ram_4823a92c)[param_2 >> 3] & 1 << (param_2 & 7)) != 0) {
                gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                return 0x1e;
              }
              if (param_2 != 0x23) {
                if (param_2 == 0x3f) {
                  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                  return 0x1f;
                }
                gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                return 1;
              }
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return 0x21;
            }
            if (((uint)(byte)(&DAT_ram_4823a92c)[param_2 >> 3] & 1 << (param_2 & 7)) != 0) {
              return 0x20;
            }
            if (param_2 == 0x23) {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return 0x21;
            }
            if (param_2 != 0x3f) {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return 1;
            }
            return 0x20;
          }
          if (param_1 != 0x22) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 1;
          }
          if (((uint)(byte)(&DAT_ram_4823a92c)[param_2 >> 3] & 1 << (param_2 & 7)) != 0) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0x22;
          }
          if (param_2 == 0x23) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0x22;
          }
        }
        if (param_2 != 0x3f) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return 0x22;
      }
      if (param_1 == 0x19) {
        return 1;
      }
LAB_ram_4818d358:
      if (param_1 < 0x1a) {
        if (param_1 == 0x17) {
          if ((param_2 != 0x2f) && (param_2 != 0x2a)) {
            if (0x19 < ((param_2 | 0x20) - 0x61 & 0xff)) {
              return 1;
            }
            return 0x18;
          }
          return 0x1e;
        }
        if (param_1 != 0x18) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        if (((param_2 | 0x20) - 0x61 & 0xff) < 0x1a) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0x18;
        }
        if (param_2 != 0x3a) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return 0x19;
      }
      if (param_1 == 0x1a) {
        if (param_2 != 0x2f) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return 0x1b;
      }
      if (param_2 == 0x2f) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x1e;
      }
      if (param_2 == 0x3f) {
        return 0x1f;
      }
      if (param_2 == 0x40) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x1d;
      }
      goto LAB_ram_4818d416;
    }
  }
  else {
    if (param_1 != 0x1d) {
      if (0x1d < param_1) goto LAB_ram_4818d3a4;
      if (param_1 == 0x19) {
        if (param_2 != 0x2f) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return 0x1a;
      }
      goto LAB_ram_4818d358;
    }
    if (param_2 == 0x40) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    if (param_2 == 0x2f) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x1e;
    }
    if (param_2 == 0x3f) {
      return 0x1f;
    }
LAB_ram_4818d416:
    if (((param_2 | 0x20) - 0x61 & 0xff) < 0x1a) {
      return 0x1c;
    }
    if (0x5f < param_2) {
      if (param_2 != 0x7e) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      return 0x1c;
    }
    if (0x5a < param_2) {
      param_2 = param_2 - 0x5b;
      uVar1 = 0x15;
      goto LAB_ram_4818d450;
    }
  }
  param_2 = param_2 - 0x21 & 0xff;
  if (0x1c < param_2) {
    return 1;
  }
  uVar1 = 0x17ffbff9;
LAB_ram_4818d450:
  return ((uVar1 >> (param_2 & 0x1f) & 1) - 1 & 0xffffffe5) + 0x1c;
}


