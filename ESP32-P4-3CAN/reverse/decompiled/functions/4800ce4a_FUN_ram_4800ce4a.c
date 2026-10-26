/* Firmware entry: 0x4800ce4a */

undefined4 FUN_ram_4800ce4a(undefined4 param_1,uint param_2,ushort *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (ushort *)0x0) {
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 1) {
      FUN_ram_4800cb74();
    }
    else if ((param_2 & 0xfffffffd) != 0) {
      puVar1 = (undefined4 *)FUN_ram_4819bf88();
      *puVar1 = 0x16;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    if ((*param_3 & 8) == 0) {
      if ((*param_3 & 2) == 0) {
        DAT_ram_4ff48384 = 2;
      }
      else {
        DAT_ram_4ff48384 = 1;
      }
    }
    else {
      DAT_ram_4ff48384 = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


