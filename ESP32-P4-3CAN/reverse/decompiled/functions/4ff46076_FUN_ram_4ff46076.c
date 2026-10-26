/* Firmware entry: 0x4ff46076 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff46076(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_34 [3];
  int iStack_28;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_34[0] = param_1;
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(auStack_34);
  if (iVar1 == 0) {
    if (*(uint *)(_DAT_ram_4ffbffe8 + 4) < param_2 + param_4) {
      return 0x104;
    }
    if (param_4 != 0) {
      if (param_3 == 0) {
        iVar1 = 0x102;
      }
      else {
        iVar2 = param_2 - (param_2 & 0xffff0000);
        iVar1 = FUN_ram_4812fa26(param_2 & 0xffff0000,iVar2 + param_4,0,&iStack_28,auStack_24);
        if (iVar1 == 0) {
          FUN_ram_4ff45158(param_3,iStack_28 + iVar2,param_4);
          FUN_ram_4812fb50(auStack_24[0]);
          return 0;
        }
      }
    }
  }
  return iVar1;
}


