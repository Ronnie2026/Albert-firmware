/* Firmware entry: 0x480b80da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_480b80da(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  code *pcStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined3 local_40;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  char cStack_38;
  undefined1 uStack_37;
  char cStack_36;
  char cStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_3c = 0x454b4341;
  _local_40 = CONCAT13(0x42,(int3)s_P4_SETTINGS_V1_ram_48223d0c._0_4_);
  uStack_30 = DAT_ram_48223d1c;
  uStack_2c = DAT_ram_48223d20;
  uStack_28 = DAT_ram_48223d24;
  uStack_24 = DAT_ram_48223d28;
  cVar3 = 'S';
  if ((param_3 != 1) && (cVar3 = 'D', param_3 != 2)) {
    cVar3 = (-(param_3 == 0) & 0xf1U) + 0x52;
  }
  cStack_35 = SUB41(s_P4_SETTINGS_V1_ram_48223d0c._8_4_,3);
  _cStack_38 = CONCAT12(cVar3,CONCAT11(0x44,(char)s_P4_SETTINGS_V1_ram_48223d0c._8_4_));
  uStack_32 = (undefined2)((uint)ram0x48223d18 >> 0x10);
  _uStack_34 = CONCAT11(0x32,(char)ram0x48223d18);
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*param_1 == 0) {
    return false;
  }
  iVar1 = FUN_ram_4812e734(*param_1,0,param_2,0x20);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = FUN_ram_4ff4511a(param_2,&local_40,0x20);
  if (iVar1 == 0) {
    return true;
  }
  pcVar4 = (char *)&local_40;
  cVar3 = *param_2;
  pcVar2 = param_2;
  while (*pcVar4 == cVar3) {
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
    if (pcVar4 == &stack0xffffffe0) goto LAB_ram_480b81d0;
    cVar3 = *pcVar2;
  }
  while( true ) {
    pcVar4 = pcVar4 + 1;
    if (cVar3 != -1) {
      return false;
    }
    pcVar2 = pcVar2 + 1;
    if (pcVar4 == &stack0xffffffe0) break;
    cVar3 = *pcVar2;
  }
LAB_ram_480b81d0:
  uVar5 = 0x20;
  do {
    if (*param_1 == 0) {
      return false;
    }
    uVar6 = 0x63000 - uVar5;
    if (0x200 < uVar6) {
      uVar6 = 0x200;
    }
    iVar1 = FUN_ram_4812e734(*param_1,uVar5,param_2,uVar6);
    if (iVar1 != 0) {
      return false;
    }
    pcVar2 = param_2;
    do {
      cVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      if (cVar3 != -1) {
        return false;
      }
    } while (pcVar2 != param_2 + uVar6);
    uVar5 = uVar5 + uVar6;
  } while (uVar5 < 0x63000);
  if (*param_1 != 0) {
    fence();
    fence();
    if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0')) {
      pcStack_4c = FUN_ram_48025b94;
      uStack_48 = 0;
      uStack_44 = 0;
      FUN_ram_4807df16(&pcStack_4c);
      iVar1 = FUN_ram_4812e4d6(*param_1,0,&local_40,0x20);
      FUN_ram_4807e2fa(&pcStack_4c);
      if (((iVar1 == 0) && (*param_1 != 0)) &&
         (iVar1 = FUN_ram_4812e734(*param_1,0,param_2,0x20), iVar1 == 0)) {
        iVar1 = FUN_ram_4ff4511a(param_2,&local_40,0x20);
        return iVar1 == 0;
      }
    }
  }
  return false;
}


