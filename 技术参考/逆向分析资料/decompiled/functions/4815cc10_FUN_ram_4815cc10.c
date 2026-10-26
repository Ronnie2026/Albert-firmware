/* Firmware entry: 0x4815cc10 */

int FUN_ram_4815cc10(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined1 auStack_40 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  if ((param_3 != 0x41) ||
     (iVar1 = FUN_ram_4815c572(param_1,param_2,param_4,param_5,param_6), iVar1 == 0x1102)) {
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uStack_44 = 0;
      iVar2 = FUN_ram_4815af12(iVar1,param_2,param_3,param_4,&uStack_44,auStack_40,0xff);
      if (iVar2 == 0) {
        iVar1 = FUN_ram_4815b176(iVar1,param_2,param_3,param_4,param_5,param_6,0xff);
        return iVar1;
      }
    }
    iVar1 = 0x1102;
  }
  return iVar1;
}


