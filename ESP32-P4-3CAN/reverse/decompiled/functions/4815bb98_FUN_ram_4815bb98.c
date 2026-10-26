/* Firmware entry: 0x4815bb98 */

int FUN_ram_4815bb98(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  byte bStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x10);
  uStack_48 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0x1102;
    }
    uStack_44 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,0x48,param_3,&uStack_44,auStack_40,0xff,param_4);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  uStack_48 = uStack_44;
  uVar3 = (uint)bStack_24;
  iVar1 = FUN_ram_4815ac98(iVar1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_4 != 0xff) {
    if (param_4 != 0) {
      if (param_4 != 0x80) {
        return 0;
      }
      uVar3 = uVar3 ^ 0x80;
    }
    if (uVar3 <= param_4) {
      return 0;
    }
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x10);
      while( true ) {
        if (iVar1 == 0) {
          return 0x1102;
        }
        uStack_44 = 0;
        iVar2 = FUN_ram_4815af12(iVar1,param_2,0x42,param_3,&uStack_44,auStack_40,param_4,0xff);
        if (iVar2 == 0) break;
        iVar1 = *(int *)(iVar1 + 4);
      }
      uStack_48 = uStack_44;
      iVar1 = FUN_ram_4815ac98(iVar1);
      if (iVar1 != 0) break;
      param_4 = param_4 + 1 & 0xff;
      if (param_4 == uVar3) {
        return 0;
      }
    }
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    uStack_44 = 0;
    iVar2 = FUN_ram_4815af12(iVar1,param_2,0x48,param_3,&uStack_44,auStack_40,0xff);
    if (iVar2 == 0) {
      uStack_48 = uStack_44;
      iVar1 = FUN_ram_4815ac98(iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
      break;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    uStack_48 = 0;
    do {
      iVar2 = FUN_ram_4815af12(iVar1,param_2,0x42,param_3,&uStack_48,auStack_40,0xff);
      if (iVar2 == 0x1102) break;
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4815ac98(iVar1,uStack_48);
      uStack_48 = bStack_3e + uStack_48;
      if (iVar2 != 0) {
        return iVar2;
      }
    } while (uStack_48 < 0x7e);
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


