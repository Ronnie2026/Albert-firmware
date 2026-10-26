/* Firmware entry: 0x480b591c */

bool FUN_ram_480b591c(int *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
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
  iVar1 = FUN_ram_4ff4511a(param_2,"P4-SETTINGS-V1",0x20);
  if (iVar1 == 0) {
    return true;
  }
  pcVar4 = "P4-SETTINGS-V1";
  cVar2 = *param_2;
  pcVar3 = param_2;
  while (*pcVar4 == cVar2) {
    pcVar4 = (char *)((int)pcVar4 + 1);
    pcVar3 = pcVar3 + 1;
    if ((undefined **)pcVar4 == &PTR_s_schema_version_ram_481cc404_ram_48222748)
    goto LAB_ram_480b59b6;
    cVar2 = *pcVar3;
  }
  while( true ) {
    pcVar4 = (char *)((int)pcVar4 + 1);
    if (cVar2 != -1) {
      return false;
    }
    pcVar3 = pcVar3 + 1;
    if ((undefined **)pcVar4 == &PTR_s_schema_version_ram_481cc404_ram_48222748) break;
    cVar2 = *pcVar3;
  }
LAB_ram_480b59b6:
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
    pcVar3 = param_2;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar2 != -1) {
        return false;
      }
    } while (pcVar3 != param_2 + uVar6);
    uVar5 = uVar5 + uVar6;
  } while (uVar5 < 0x63000);
  if (*param_1 != 0) {
    fence();
    fence();
    if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0')) {
      pcStack_3c = FUN_ram_48025b94;
      uStack_38 = 0;
      uStack_34 = 0;
      FUN_ram_4807df16(&pcStack_3c);
      iVar1 = FUN_ram_4812e4d6(*param_1,0,"P4-SETTINGS-V1",0x20);
      FUN_ram_4807e2fa(&pcStack_3c);
      if (((iVar1 == 0) && (*param_1 != 0)) &&
         (iVar1 = FUN_ram_4812e734(*param_1,0,param_2,0x20), iVar1 == 0)) {
        iVar1 = FUN_ram_4ff4511a(param_2,"P4-SETTINGS-V1",0x20);
        return iVar1 == 0;
      }
    }
  }
  return false;
}


