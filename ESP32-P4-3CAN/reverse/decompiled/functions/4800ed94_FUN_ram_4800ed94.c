/* Firmware entry: 0x4800ed94 */

int FUN_ram_4800ed94(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == '/') && (param_1[1] == '\0')) {
    iVar2 = 0;
    do {
      uVar3 = iVar2 << 1;
      if ((DAT_ram_4ff6db2c >> (uVar3 & 0x1f) & 3) == 0) {
        param_2 = param_2 & 3;
        if (param_2 == 2) {
          DAT_ram_4ff6db2c = DAT_ram_4ff6db2c | 3 << (uVar3 & 0x1f);
          return iVar2;
        }
        if (param_2 != 1) {
          if (param_2 == 0) {
            DAT_ram_4ff6db2c = DAT_ram_4ff6db2c | 1 << (uVar3 & 0x1f);
            return iVar2;
          }
          puVar1 = (undefined4 *)FUN_ram_4819bf88();
          *puVar1 = 0x16;
          return -1;
        }
        DAT_ram_4ff6db2c = DAT_ram_4ff6db2c | 2 << (uVar3 & 0x1f);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10);
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 0x18;
  }
  else {
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 2;
  }
  return -1;
}


