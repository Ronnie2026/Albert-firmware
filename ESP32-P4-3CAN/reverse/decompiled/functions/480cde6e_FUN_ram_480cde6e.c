/* Firmware entry: 0x480cde6e */

bool FUN_ram_480cde6e(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6,code *param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*(int *)(param_1 + 0x518) == param_3) && (*(int *)(param_1 + 0x51c) == param_4)) &&
      (iVar1 = FUN_ram_4ff4511a(param_1 + 0x500,param_2,0xc), iVar1 == 0)) &&
     ((*(byte *)(param_1 + 0x88) - 1 & 0xff) < 0x14)) {
    piVar3 = (int *)(param_1 + 0x90);
    uVar2 = 0;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 0xe;
      if (iVar1 == param_5) {
        local_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        iVar1 = (*param_7)(uVar2 * 0x38 + 0x90 + param_1,&local_40);
        if (iVar1 != 0) {
          iVar1 = FUN_ram_4ff4511a(&local_40,param_6,0x20);
          return iVar1 == 0;
        }
        return false;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(byte *)(param_1 + 0x88));
  }
  return false;
}


