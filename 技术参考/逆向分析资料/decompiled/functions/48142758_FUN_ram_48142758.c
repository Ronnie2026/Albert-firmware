/* Firmware entry: 0x48142758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_48142758(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/udp.c",0x88,"udp_input_local_match",
                     "udp_input_local_match: invalid netif");
  }
  if (((char)param_1[0xc] != '\0') &&
     ((char)param_1[0xc] != (char)(*(char *)(DAT_ram_4ff6cdb8 + 0xea) + '\x01'))) {
    return false;
  }
  bVar1 = true;
  if ((char)param_1[5] != '.') {
    bVar1 = false;
    if (DAT_ram_4ff6cdf4 == (char)param_1[5]) {
      uVar2 = *param_1;
      if (param_3 == 0) {
        if (DAT_ram_4ff6cdf4 != '\x06') {
          if (uVar2 != 0) {
            return _DAT_ram_4ff6cde0 == uVar2;
          }
          return true;
        }
        if ((((uVar2 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
          return true;
        }
        bVar1 = false;
        if (((uVar2 == _DAT_ram_4ff6cde0) && (param_1[1] == DAT_ram_4ff6cde4)) &&
           ((param_1[2] == DAT_ram_4ff6cde8 && (param_1[3] == DAT_ram_4ff6cdec)))) {
          return (char)param_1[4] == DAT_ram_4ff6cdf0;
        }
      }
      else {
        bVar1 = true;
        if ((uVar2 != 0) && (bVar1 = true, _DAT_ram_4ff6cde0 != 0xffffffff)) {
          return ((_DAT_ram_4ff6cde0 ^ uVar2) & *(uint *)(param_2 + 0x1c)) == 0;
        }
      }
    }
  }
  return bVar1;
}


