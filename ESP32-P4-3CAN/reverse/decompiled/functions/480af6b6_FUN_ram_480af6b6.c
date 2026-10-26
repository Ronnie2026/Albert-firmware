/* Firmware entry: 0x480af6b6 */

bool FUN_ram_480af6b6(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar1 = (char *)(param_2 + 0x966);
  DAT_ram_4ff6dd64 = FUN_ram_4812e734(*param_1,0,pcVar1,0x20);
  if (DAT_ram_4ff6dd64 != 0) {
    return false;
  }
  iVar2 = FUN_ram_4ff4511a(pcVar1,&DAT_ram_48222af8,0x20);
  if (iVar2 == 0) {
    return true;
  }
  pcVar5 = "P4-DATA-NVS-V1";
  cVar3 = *pcVar1;
  pcVar4 = pcVar1;
  while (*pcVar5 == cVar3) {
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
    if (pcVar5 == "ea5a23e5653092c96f92a42531ac0067641ba675c7efb4e02d2898ef5ecb2c8b")
    goto LAB_ram_480af760;
    cVar3 = *pcVar4;
  }
  while( true ) {
    pcVar5 = pcVar5 + 1;
    if (cVar3 != -1) {
      return false;
    }
    pcVar4 = pcVar4 + 1;
    if (pcVar5 == "ea5a23e5653092c96f92a42531ac0067641ba675c7efb4e02d2898ef5ecb2c8b") break;
    cVar3 = *pcVar4;
  }
LAB_ram_480af760:
  uVar7 = 0x20;
  iVar2 = DAT_ram_4ff6dd64;
  do {
    DAT_ram_4ff6dd64 = iVar2;
    uVar6 = 0x11000 - uVar7;
    if (0x100 < uVar6) {
      uVar6 = 0x100;
    }
    DAT_ram_4ff6dd64 = FUN_ram_4812e734(*param_1,uVar7,pcVar1,uVar6);
    if (DAT_ram_4ff6dd64 != 0) {
      return false;
    }
    pcVar4 = pcVar1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (cVar3 != -1) {
        return false;
      }
    } while (pcVar4 != (char *)(param_2 + 0x966 + uVar6));
    uVar7 = uVar7 + uVar6;
    iVar2 = 0;
  } while (uVar7 < 0x11000);
  pcStack_3c = FUN_ram_48025b94;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_ram_4807df16(&pcStack_3c);
  iVar2 = FUN_ram_4812e4d6(*param_1,0,&DAT_ram_48222af8,0x20);
  DAT_ram_4ff6dd64 = iVar2;
  FUN_ram_4807e2fa(&pcStack_3c);
  if ((iVar2 == 0) &&
     (DAT_ram_4ff6dd64 = FUN_ram_4812e734(*param_1,0,pcVar1,0x20), DAT_ram_4ff6dd64 == 0)) {
    iVar2 = FUN_ram_4ff4511a(pcVar1,&DAT_ram_48222af8,0x20);
    return iVar2 == 0;
  }
  return false;
}


