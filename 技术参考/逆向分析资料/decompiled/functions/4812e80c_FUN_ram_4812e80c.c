/* Firmware entry: 0x4812e80c */

undefined4 FUN_ram_4812e80c(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812e16a(0xff,0xff,0);
  if (iVar1 != 0) {
    do {
      iVar2 = FUN_ram_4812e20a(iVar1);
      if (*(char *)(iVar2 + 0x2a) != '\0') {
        uVar3 = *(uint *)(iVar2 + 0xc);
        if (param_1 < uVar3) {
          if (uVar3 < param_2 + param_1) {
            return 0;
          }
        }
        else if (param_1 < uVar3 + *(int *)(iVar2 + 0x10)) {
          return 0;
        }
      }
      iVar1 = FUN_ram_4812e094(iVar1);
    } while (iVar1 != 0);
  }
  return 1;
}


