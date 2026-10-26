/* Firmware entry: 0x48172bf0 */

int FUN_ram_48172bf0(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  while( true ) {
    bVar1 = (param_5 >> 1 & 0x3f) == uVar2;
    iVar3 = FUN_ram_4817fc26(param_2,param_3,bVar1);
    if (iVar3 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar3;
    }
    iVar3 = FUN_ram_4817fc26(param_2 + 8,param_3 + 8,bVar1);
    uVar2 = uVar2 + 1 & 0xff;
    if (iVar3 != 0) break;
    param_3 = param_3 + 0x18;
    if (param_4 == uVar2) {
      iVar3 = FUN_ram_48172b94(param_1,param_2,param_5 >> 7);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_ram_4817ff24(param_2 + 0x10,1);
      return iVar3;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return iVar3;
}


