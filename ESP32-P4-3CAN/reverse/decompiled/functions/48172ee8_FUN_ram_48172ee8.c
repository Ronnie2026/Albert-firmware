/* Firmware entry: 0x48172ee8 */

int FUN_ram_48172ee8(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_28);
  iVar1 = FUN_ram_481802e8(param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4817dc1e(param_1,param_4);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_4817ff24(param_2,1), iVar1 == 0)) &&
       (iVar1 = FUN_ram_4817ff24(param_2 + 8,1), iVar1 == 0)) {
      iVar1 = FUN_ram_4817ff24(param_2 + 0x10,0);
    }
  }
  else {
    iVar1 = FUN_ram_481802e8(param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4817dc1e(param_1,param_4);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_4817fe72(param_2,param_4), iVar1 == 0)) &&
         (iVar1 = FUN_ram_4817fe72(param_2 + 8,param_4 + 8), iVar1 == 0)) {
        iVar1 = FUN_ram_4817fe72(param_2 + 0x10,param_4 + 0x10);
      }
    }
    else {
      iVar1 = FUN_ram_481802e8(param_3,0xffffffff);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4817dc1e(param_1,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_ram_4817fe72(param_2,param_4), iVar1 == 0)) {
          iVar3 = param_2 + 8;
          iVar1 = FUN_ram_4817fe72(iVar3,param_4 + 8);
          if ((iVar1 == 0) && (iVar1 = FUN_ram_4817fe72(param_2 + 0x10,param_4 + 0x10), iVar1 == 0))
          {
            iVar2 = FUN_ram_481802e8(iVar3,0);
            iVar1 = FUN_ram_48180594(auStack_28,param_1 + 4,iVar3);
            if (iVar1 == 0) {
              iVar1 = FUN_ram_4817fc26(iVar3,auStack_28,iVar2 != 0);
            }
          }
        }
      }
      else {
        iVar1 = FUN_ram_4817dcd8(param_1,param_2,param_3,param_4,0,0,param_5);
      }
    }
  }
  FUN_ram_4817fb90(auStack_28);
  return iVar1;
}


