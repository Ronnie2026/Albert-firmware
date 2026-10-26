/* Firmware entry: 0x4815ce2a */

undefined4
FUN_ram_4815ce2a(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_54;
  undefined1 auStack_50 [24];
  uint uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  if (param_3 == 0x41) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      return 0x1102;
    }
    do {
      uStack_54 = 0;
      iVar2 = FUN_ram_4815af12(iVar1,param_2,0x48,param_4,&uStack_54,auStack_50,0xff);
      if (iVar2 == 0) goto LAB_ram_4815ce8a;
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    uStack_54 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,param_3,param_4,&uStack_54,auStack_50,0xff);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  uStack_38 = uStack_38 & 0xffff;
LAB_ram_4815ce8a:
  *param_5 = uStack_38;
  return 0;
}


