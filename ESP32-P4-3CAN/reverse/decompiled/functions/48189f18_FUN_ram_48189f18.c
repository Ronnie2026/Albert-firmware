/* Firmware entry: 0x48189f18 */

int FUN_ram_48189f18(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iStack_54;
  int iStack_50;
  byte *pbStack_4c;
  int iStack_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  uint uStack_2c;
  int iStack_28;
  byte *pbStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 5;
  *param_3 = 5;
  *param_4 = 0x14;
  if (*param_1 != 0x30) {
    return -0x2362;
  }
  iStack_54 = param_1[2];
  iVar1 = param_1[1] + iStack_54;
  if (iStack_54 == iVar1) {
    return 0;
  }
  iVar3 = FUN_ram_4817f40e(&iStack_54,iVar1,&iStack_50,0xa0);
  if (iVar3 == 0) {
    iVar2 = iStack_54 + iStack_50;
    iVar3 = FUN_ram_4817fa0c(&iStack_54,iVar2,auStack_44);
    if ((iVar3 != 0) && (iVar3 + -0x2300 != 0)) {
      return iVar3 + -0x2300;
    }
    iVar3 = FUN_ram_48185236(auStack_44,param_2);
    if (iVar3 != 0) goto LAB_ram_48189fa2;
    if (iStack_54 != iVar2) {
      return -0x2366;
    }
  }
  else {
    iVar2 = iStack_54;
    if (iVar3 != -0x62) goto LAB_ram_48189fa2;
  }
  if (iVar1 == iVar2) {
    return 0;
  }
  iVar3 = FUN_ram_4817f40e(&iStack_54,iVar1,&iStack_50,0xa1);
  if (iVar3 == 0) {
    iVar2 = iStack_54 + iStack_50;
    iVar3 = FUN_ram_4817f8f8(&iStack_54,iVar2,auStack_44,&iStack_38);
    if ((iVar3 != 0) && (iVar3 + -0x2300 != 0)) {
      return iVar3 + -0x2300;
    }
    if ((iStack_40 != 9) || (iVar3 = FUN_ram_4ff4511a(&DAT_ram_481e0ad8,uStack_3c), iVar3 != 0)) {
      return -0x20ae;
    }
    if (iStack_38 != 0x30) {
      return -0x2362;
    }
    pbStack_4c = pbStack_30;
    pbVar4 = pbStack_30 + iStack_34;
    if (pbVar4 <= pbStack_30) {
      return -0x2360;
    }
    uStack_2c = (uint)*pbStack_30;
    iVar3 = FUN_ram_4817f40e(&pbStack_4c,pbVar4,&iStack_28,6);
    if (iVar3 == 0) {
      pbStack_24 = pbStack_4c;
      pbStack_4c = pbStack_4c + iStack_28;
      iVar3 = FUN_ram_48185236(&uStack_2c,param_3);
      if (iVar3 != 0) goto LAB_ram_4818a050;
      if (pbVar4 != pbStack_4c) {
        iVar3 = FUN_ram_4817f40e(&pbStack_4c,pbVar4,&iStack_48,5);
        if (iVar3 != 0) goto LAB_ram_4818a050;
        if (iStack_48 != 0) {
          return -0x2300;
        }
        if (pbVar4 != pbStack_4c) {
          return -0x2366;
        }
      }
    }
    else {
LAB_ram_4818a050:
      if (iVar3 + -0x2300 != 0) {
        return iVar3 + -0x2300;
      }
    }
    if (iStack_54 != iVar2) {
      return -0x2366;
    }
  }
  else {
    iVar2 = iStack_54;
    if (iVar3 != -0x62) goto LAB_ram_48189fa2;
  }
  if (iVar1 != iVar2) {
    iVar3 = FUN_ram_4817f40e(&iStack_54,iVar1,&iStack_50,0xa2);
    if (iVar3 == 0) {
      iVar2 = iStack_54 + iStack_50;
      iVar3 = FUN_ram_4817f55c(&iStack_54,iVar2,param_4);
      if (iVar3 != 0) goto LAB_ram_48189fa2;
      if (iStack_54 != iVar2) {
        return -0x2366;
      }
    }
    else {
      iVar2 = iStack_54;
      if (iVar3 != -0x62) goto LAB_ram_48189fa2;
    }
    if (iVar1 != iVar2) {
      iVar3 = FUN_ram_4817f40e(&iStack_54,iVar1,&iStack_50,0xa3);
      if (iVar3 == 0) {
        iVar2 = iStack_54 + iStack_50;
        iVar3 = FUN_ram_4817f55c(&iStack_54,iVar2,&uStack_2c);
        if (iVar3 != 0) goto LAB_ram_48189fa2;
        if (iStack_54 != iVar2) {
          return -0x2366;
        }
        if (uStack_2c != 1) {
          return -0x2300;
        }
      }
      else if (iVar3 != -0x62) {
LAB_ram_48189fa2:
        return iVar3 + -0x2300;
      }
      if (iVar1 != iStack_54) {
        return -0x2366;
      }
    }
  }
  return 0;
}


